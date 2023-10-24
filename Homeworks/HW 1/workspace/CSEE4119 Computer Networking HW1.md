# CSEE4119 Computer Networking HW1

<div align = "center"><font size = 5> Tong Wu, tw2906 <div>



## Question 1

I agree to abide the policy. I do not have any questions about the policy at this time.



## Question 2

### Part b

The download bandwidth is greater than the upload bandwidth. The reason of this should be that, the most of the network accesses are designed as asymmetric, which the bandwidth of downstream is designed to be faster than the upstream bandwidth. Since most of the user will take more time on downloading something, such as webpage, video and streaming, but spend less traffic on upload files. So most of the provider will provide a asymmetric network access.

### Part c

The unloaded latency tests measures the RTT of a request when there are no other significant traffic present on user’s network, and the loaded latency measures the RTT when there has data-heavy applications on the network [1]. Since the heavy duty applications need send and receive a huge amount of packets, so it may cause the congestion on the network, which the router may have extra delay to process packets. So test latency under such a environment will returns a bigger number than testing under idle networks.

### Part d

The deep buffer can be useful in case of network congestion. During the network congestion, packet loss will be more often than idle time, the buffer can be used to store the packets that have not yet been sent out. So the deep buffer can relief the prompt network congestion and decrease the probability of packet loss. 

### Part e

The negative performance effect should be have high latency, since ISPs largen their packet buffer rather than improve their packet forwarding ability will cause there will pile up a larger number of packets in the buffer during the network congestion. More time will be costed in queuing cause large latency.

<div STYLE="page-break-after: always;"></div>

## Question 3

### Part a

The layered Internet architecture has a cleared structure, which is easy to identification.

### Part b

The layered Internet architecture makes maintenance easier, since the change of a specific layer will not influence other layers.

### Part c

That the upper layer may have the same function as the lower layer, causing implicit performance loss and latency.

### Part d

##### ***Section i***

IPv4 and IPv6. The IPv4 is standardized in 1981.9[2], and IPv6 is standardized at 1998.12 [3].

##### *Section ii*

They are belongs to the network layer.

##### *Section iii*

Since the change of the Internet protocol needs to rewrite the application, such as firewall and IP address manager. Internet provider needs a huge time to update these, so the percent of content provider that using newer version is relatively low. The benefits of the IPv6 is that, it provides much more IP addresses, and optimize the routing table size can increase the performance and efficiency of the router[3].

### Part e

The lack layers are presentation layer and session layer, in 5-layer structure, these two layers are included in application layer. Session layer’s function is to create and maintain the session between users, or server and user [4], which should be replaced by HTTP. Presentation layer in order to define the format and encrypt data [5], which should be replaced by TCP/UDP with SSL/TSL encryption.

### Part f

The TCP service provides reliable transport to ensure the reliability between sender and receiver, flow control to balance the speed of both, congestion control to throttle the speed if network is in heavy duty. The UDP service only provide unreliable transport. The TCP is usually used in file transferring, web page browsing. UDP service usually use in streaming and VOIP. Choosing these two different protocol depends on what functions would app needs.

### Part g

The packet will be sent from Alice’s computer passing through all 5 layers, then passes network, link, and the physical layer for two routers, finally sends to Bob’s computer passing through all 5 layers. So the total amount of the number of times processed in each layer is:

2-2-4-4-4

<div STYLE="page-break-after: always;"></div>

## Question 4

### Part a

$$ \lfloor146\ Mbps/5\ Mbps\rfloor=\lfloor29.2\rfloor=29\ \ students $$

### Part b

For a 4 seconds BoJack chunk, total traffic needs:

$4\ s*1.5\ Mbps=6\ Mb$

And for a 5 Mbps bandwidth circuit, total download time will be:

$6\ Mb / 5\ Mbps=1.2\ s$

### Part c

The idle time will be:

$4\ s-1.2\ s=2.8\ s$

The fraction of idle time will be:

$$2.8/4=0.7$$

### Part d

The collision chance should be defined as [The sum of the probabilities of simultaneous connections beyond the number of students for whom the network can provide 100% reliability].

According to the class slide, the probability of the reliability $P_R$ for total $N$ student and $T$ of students number under 100% reliability will active simultaneously is:

$P_R=\sum_{i=0}^{i=T}\binom N i p^i(1-p)^{N-i}$

And with the definition of the ‘collision chance’, the new equation could be written as inequality as below:

$$\sum_{i=1}^{i=T}\binom {N+T} {i} 0.3^i 0.7^{N+T-i}>0.99$$

Where variable N is the total of student number beyond T (29).

By calculating, when $N=38$. which means the total student number $N+T=69$, the left side of the inequality equals to:

$$\sum_{i=1}^{i=29}\binom {69} {i} 0.3^i 0.7^{69-i}\approx 0.987874$$

And, when N=39, which means the total student number $N+T=68$, the left side of the inequality equals to:

$$\sum_{i=1}^{i=29}\binom {68} {i} 0.3^i 0.7^{68-i}\approx 0.990449$$

The result is bigger than $0.99$.

So as the result, the total number of student that Ethan’s phone hotspot with Verizon 5G connection in class can be shared with watching BoJack video on 1080p and ensure the collision rate below 0.01 should be $68$.

### Part e

$$ \lfloor146\ Mbps/1.5\ Mbps\rfloor=\lfloor97.33\dot3\rfloor=97\ \ students $$

### Part f

The collision should be defined as [The sum of the probabilities of simultaneous connections beyond the number of students for whom the network can provide 100% reliability].

According to Part d, the active rate $p$ is still $0.3$ under $5\ \ Mbps$ link.

So the equation of the probability of collision can be written as:

$1-\sum_{i=1}^{i=29}\binom {97} {i} 0.3^i 0.7^{97-i}\approx0.458875$

The probability of collision is approximately $0.458875$.

### Part g

Under this environment, the best download rate should be 1.5 Mbps and the network design should be circuit switching. Since that the 1.5 Mbps download rate can maximum the active rate of the network without bring stuck, and allow the maximum number of student to watch the video simultaneously. Also, according to the answer of Part d and Part f, the collision will be serious and may influence the experience of watching video by using packet switching, while circuit switching can ensure 100% of reliability. 

### Part h

If there are over 500 students are watching BoJack with Standard definition (SD) quality, then the standard bandwidth requirement is 1 Mbps [6] and which should be even lower for BoJack. In this case, the best download rate should be 1.5 Mbps and the network design should be packet switching. Since the active rate for each student will much less, so the probability of collision will decrease. Then the maximum number of student can much greater with a reasonable reliable rate (like 95%).

<div STYLE="page-break-after: always;"></div>

## Question 5

### Part a

The M bits long message is sent as k packets, N routers with each R bps bandwidth, so each router will take $\frac {\frac M k} R *k \Rightarrow\frac M R\ \ sec$ to receive all the packets. While the first router received the first packet, and starting to receive the second packet, it will send the first packet to the next router. According to this, the total deliver time should be:

$$T_{seg}=(N+k)\frac M{Rk} \ \ sec$$

### Part b

Total N routers needs $N\frac M R\ \ sec$ to deliver, plus one final destination will be $T_{non-seg}={(N+1)}\frac {M} R\ \ sec$.

### Part c

Each packets now has h bits of header, so for the packet-switching store-and-forward policy, each packets has bits:

$$\frac M k +h\ \ bits$$

So, the total deliver time now should be:

$$(N+k)\frac {M+hk} {Rk}\ \ sec$$

For the transmission without segmenting, the total deliver time should be:

$$\frac {M+h} {R}(N+1)\ \ sec$$

For a specific circumstance, two statements should have equal result:

$$(N+k)\frac {M+hk} {Rk}=\frac {M+h} {R}(N+1)$$

$$\frac {\frac M k +h} {M+h}=\frac {N+1} {N+k}$$

$$\frac {MN} k+hN+M+hK=MN+hN+M+h$$

$$\frac {MN} k +hK=MN+h$$

$$\frac {1-k} k MN=(1-k)h$$

$$MN=hK$$

So we can assume that when the total message $M=1000$ bits, with passing through $N=5$ routers, header is $h=10$ bits, segment the total message to $k=500$ packets, then two approaches have the same end-to-end delay.

### Part d

If there are many routers, which can assume that the router number N convergence to infinity, the results from part c for two approaches can be rewritten to:

$$\frac {M+hK} {Rk}N+\frac {M+hK} R,\ \ \ \ \frac {M+hK} {Rk}N+ \frac {M+hK} {Rk}+\frac {Mk-M} {Rk}N$$

which the left hand side is the segmentation approach, and the right hand side is the non-segmentation approach.

When the number of router converges to infinity, the left hand side must smaller than the left hand side.

$$\lim_{N\to\infin}\frac {M+hK} {Rk}N+\frac {M+hK} R \ \ \lt \ \ lim_{N\to\infin}\frac {M+hK} {Rk}N+ \frac {M+hK} {Rk}+\frac {Mk-M} {Rk}N$$

So the segment approach delivery will be faster.

### Part e

Because the segmentation approach will not need to wait the next package in order to check the integrity, so it can be faster if the router number is large. While under this situation, the segmentation will face the integrity problem, which is that one or few of packets may loss without fine solution. So the packet switching store-and-forward approach has been introduced, while this approach increase the end-to-end delay since it need to wait all packets arrive to the router, the router will send them after it check the integrity. So for the store-and-forward approach, the end-to-end delay will be same as non-segmentation approach when the heading is not including, and the delay will greater than non-segmentation approach if the heading is added to each packet.

### Part f

With segmentation, the original 25.0 MB packet will be divided into $\frac {25 MB * 1024} {16KB} = 16000\ \ packets$.

With 2% of loss, the first round loss packets will be $16000*0.02=320\ \ packets$ ,with the iteration, the total ideal transmission time under $1\ \ Gbps=1024\ \ Mbps$ bandwidth equation will be:

$$\frac {25} {1024}+\frac {320*1.6/1024} {1024} +\frac {320*0.02*1.6/1024} {1024}+\frac {320*0.02*0.02*1.6/1024} {1024}+... \rightarrow 0.02931 \ \ sec$$

### Part g

With non-segmentation, the 25.0 MB packet will be delivered in $\frac {25} {1024} \approx 0.0244\ \ sec$ with $1\ \ Gbps=1024\ \ Mbps$ bandwidth, which is slightly quicker than the segmentation approach, since the segmentation will loss a part of packets so the re-transmission delay the time. While the non-segmentation approach will 2% of probability to sent the packet twice, which is total $\approx0.0488\ \ sec$. 

### Part h

##### *Section i*

The probability of segmentation approach has 200% of the ideal delay will be:

$$\binom {16000} {16000} 0.02^{16000}0.98^{0}=0.02^{16000}\approx 3.0195\times10^{-27184}$$

Where the 200% delay should assume that all 16000 packets is lost at the first transmission.

##### *Section ii*

The probability of non-segmentation approach has 200% of ideal delay will be:

$$\binom {1} {1}0.02^10.98^0=0.02$$

Where the 200% delay should assume the packet is lost at the first transmission.

### Part i

Segmentation approach avoid “to put all eggs into one basket”, which means to chunk data into slices, since the loss between packets is an independent event, so loss a large scale of packets in one transmission period will be a small-probability event. Although the expected delay of segmentation approach may slightly greater than non-segmentation approach, it avoids the total loss of the data, especially on the situation that transferring large data. 

### Part j

The largest packet allowed by Ethernet is 1518 bytes, 18 bytes are headers and frame check sequence, so the largest packet is 1500 bytes, also known as Maximum Transmission Unit (MTU) [7]. The OC-24 rate is a network line with transmission speeds of up to 1244.16 Mbit/s, which payload is 1202.208 Mbit/s [8]. Assume the speed of light in vacuum is $3\times10^8\ m/s$, the speed of light in fibre should be $2\times 10^8\ m/s$. 

Transfer the Mbit/s to MByte/s, since $1 \ \ MB = 8 \ \ Mb$, so the OC-24 payload speed is $1202.208/8=150.276\ \ MB/s$. 

The transmission time of transferring the largest packet allowed by Ethernet (1518 bytes) is:

$$\frac {1518} {150.276\times1024} \approx 9.8647\times10^{-3}\ \ sec$$

So the total length between switch X and switch Y in this environment is:

$$\frac {1518} {150.276\times1024} \times 2\times10^8 \approx 1.972932\times10^{6}\ m=1972.932\ km$$

### Part k

The OC-3 rate is a network line with transmission speeds of up to 155.52 Mbit/s, which payload is 148.608 Mbit/s [8].

Transfer the Mbit/s to MByte/s, since $1 \ \ MB = 8 \ \ Mb$, so the OC-3 payload speed is $148.608/8=18.576\ \ MB/s$.

The transmission time of transferring the largest packet allowed by Ethernet (1518 bytes) is:

$$\frac {1518} {18.576\times1024} \approx 0.080\ \ sec$$

So the width of the packet in this environment is:

$$\frac {1518} {18.576\times1024} \times 2\times10^8 \approx 1.5960614\times10^{7}\ m=15960.614\ km$$

The “width” of the packet is longer. The reason of this is that, the protocol of synchronous optical networking (SONET) for OC-3 and OC-24 is different. OC-3 uses STS-3 format as SONET frame format, which can be multiplexed by interleaving the bytes of the three STS-1 frames [9]. OC-24 uses STS-24 format as SONET frame format, which is formed by successively aggregating multiples of slower circuits, for example aggregated from two STS-12 signal or eight STS-3 signal[9]. By multiplexing or aggregating the signal, OC-3 and OC-24 then has different speed rate. As the summary, the higher standard of optical carrier can transmit the data on multiple signals, that’s why the width of packet calculated on OC-3 is roughly eight times of the width calculated on OC-24, since OC-24 can transfer data on eight aggregated STS-3 signal. 

<div STYLE="page-break-after: always;"></div>

## Reference

[1] Sergey Fedorov, ‘FAST.com Now Measures Latency and Upload Speed’, Netflix. https://about.netflix.com/en/news/fast-com-now-measures-latency-and-upload-speed (accessed Sep. 29, 2022)

[2] Wikipedia, ‘IPv4’, Wikipedia. https://zh.m.wikipedia.org/zh/IPv4 (accessed Oct. 2, 2022)

[3] Wikipedia, ‘IPv6’, Wikipedia. https://zh.m.wikipedia.org/wiki/IPv6 (accessed Oct. 2, 2022)

[4] GeeksForGeeks, ‘Session Layer in OSI model’, GeeksForGeeks. https://www.geeksforgeeks.org/session-layer-in-osi-model/ (accessed Oct. 2, 2022)

[5] GeeksForGeeks, ‘Presentation Layer in OSI model’, GeeksForGeeks. https://www.geeksforgeeks.org/presentation-layer-in-osi-model/ (accessed Oct. 2, 2022)

[6] Netflix, ‘Internet connection speed recommendations’, Netflix. https://help.netflix.com/en/node/306 (accessed Sep. 30, 2022)

[7] Wikipedia, ‘Maximum transmission unit’, Wikipedia. https://en.wikipedia.org/wiki/Maximum_transmission_unit (accessed Oct. 3, 2022)

[8] Wikipedia, ‘Optical Carrier transmission rates’, Wikipedia. https://en.wikipedia.org/wiki/Optical_Carrier_transmission_rates (accessed Oct. 3, 2022)

[9] Wikipedia, ‘Synchronous optical networking’, Wikipedia. https://en.wikipedia.org/wiki/Synchronous_optical_networking (accessed Oct. 3, 2022)

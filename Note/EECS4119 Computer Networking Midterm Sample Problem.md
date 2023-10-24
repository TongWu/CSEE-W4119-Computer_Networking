# EECS4119 Computer Networking Midterm Sample Problem

## Short Answer Questions

### 1a

Q: What is an advantage of Go-Back-N over Selective Repeat

A: The Go-Back-N will retransmit N packets starting from the losing packet. Selective repeat will retransmit the losing packet. The advantage for GBN is that, the receiver do not need to sent ACK for every received packets, but sent a cumulative ACKs for N packets. Also, if a specific packet is lost, no receiver side buffer required to storing the subsequent packets, receiver will discard all of them and waiting for the fresh new N packets.

### 1b

Q: What is an advantage of Selective Repeat over Go-Back-N

A: The selective repeat has no need to wait number of packets retransmission, since the subsequent out-of-order packets are stored in a buffer and the receiver just need to wait for the lacking packet and reassemble them into a series. It speedup the processing time. 

### 1c

Q: Are there ways in which TCP is more like Go-Back-N than like Selective Repeat

A: The core difference between GBN and SR is that GBN using cumulative ACK while SR using independent ACK. In TCP, if a packet is missing and sender are still sending subsequent packets, the receiver will send duplicate ACK for the missing packet’s sequence number, which is a cumulative ACK.

### 1d:

Q: Are there ways in which TCP is more like Selective Repeat than like Go-Back-N

A: TCP will only retransmit the packet of lost. Which is same as the solution of SR.

## Conditional Get

### 2a

Q: What protocol includes a Conditional get

A: HTTP

### 2b

Q: What is the purpose of a Conditional get

A: To verify the cache object is up to date

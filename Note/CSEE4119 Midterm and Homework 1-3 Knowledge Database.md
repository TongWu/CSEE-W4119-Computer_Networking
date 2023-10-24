# CSEE4119 Midterm and Homework 1-3 Knowledge Database

### Layered Internet Architecture

Split the Internet into several layers, including application, transportation, network, physical layer.

Advantage:

- **Compatibility**, the protocols at each layer is easy to compatible with other device’s same layer
- **Isolated**, allow to change the implementation of a service without affecting other components of the system
- Developer who working on a certain layer does not require the information about the whole model
- Easy to **troubleshooting**

Disadvantage:

- Each layer will create more **overhead **because they all add data to packet
- Can make useful information in a certain layer **invisible **and **inaccessible **to other layers
- May **duplicate **lower-layer functionality

### Circuit and Packet Switching

Circuit switching: each function (such as calling, Internet surfing) has dedicated resources as a circuit

- Use FDM or TDM to generate a virtual ‘circuit’, where dash line distinguish up and down load.

![FDM](https://images.wu.engineer/images/2022/10/30/Untitled-2304a40620ded582e4.png)

![TDM](https://images.wu.engineer/images/2022/10/30/Untitled-240a757c2ea27002d2.png)

Packet switching: Transmit all functions data as packets interleaved.

### Segmentation

Split each file(message) into small packets, each packet has original header and a small piece of file.

### TCP and UDP

**TCP Two way handshaking:** Client send handshake packet then host send ACK packet.

**TCP Three way handshaking:** Client send handshake packet then host send ACK packet with a seq number, client then send ACK packet for this seq number.

### DNS

Use **UDP protocol** to transmit query and result. Because the DNS query and response message are shot and they can fit in one UDP segment. Also, UDP has no handshaking, which is time saving.

Two DNS querying method: recursive and iterative:

- Iterative query:
  - Host ask local DNS server for hostname
  - local DNS server ask root DNS server for hostname, root DNS server response hostname and IP address for **TLD server**
  - local DNS ask TLD server for hostname, TLD server response hostname and IP for **authoritative server**
  - local DNS ask authoritative server for hostname, authoritative server response hostname and IP for the website
  - local DNS returns name/IP to host

![image-20221102221712664](https://images.wu.engineer/images/2022/11/02/image-20221102221712664.png)

- Recursive query:
  - Host ask local DNS server for hostname
  - local DNS server ask root DNS server for hostname
  - root DNS server ask **TLD server** for hostname
  - TLD server ask authoritative server for hostname
  - authoritative returns name/IP for the website to TLD server
  - TLD server forward message to root server
  - root server forward message to local DNS server
  - local DNS server forward message to host

![Untitled](https://images.wu.engineer/images/2022/10/30/Untitled-6710e85ae81191ab18.png)

### CDN

Store/serve multiple copies of content chunks at multiple geographically distributed sites

Three approaches:

**Custom URLs:**

- CDN server returns a weblink to user

**DNS Redirection CDN:**

- traditional approach
- each server has own IP address
- CDN’s DNS gives client a IP address of a particular server

**Anycast**

- BGP routing
- all servers use same IP address
- run HTTP/TCP over anycast

![image-20221017155009998](https://images.wu.engineer/images/2022/10/30/image-20221017155009998dde310a3ab7e9508.png)

### P2P

- No always-on server
- peers are intermittently connected and change IP addresses
- 
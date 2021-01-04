## 목차

[IP](#IP)

[Subnet Mask](#Subnet-Mask)

[Network/Boradcast address](#Network/Boradcast-address)

[Host address](#Host-address)

[Public / Private IP address (공인/사설 IP 주소)](#Public-/-Private-IP-address)

[OSI Model](#OSI-Model)

[Application Layer](#Application-Layer)

[Transport Layer](#Transport-Layer)

[Network Layer](#Network-Layer)

</br>

---

## IP

### IP Address

**IPv4 address Size**
```
32bit
```
**IPv6 address Size**
```
128bit
```
**IP address Class**
```
Class A
Class B
Class C
Class D
Class E
```

### IP Address Class

**Q. Which IP address class has more host addresses available by default?**

기본적으로 더 많은 호스트 주소를 사용할 수있는 IP 주소 클래스는 무엇입니까?
```
Answer : A (First(A))
```
**Q. What is the default IP address class available?**

사용 가능한 기본 IP 주소 클래스는 무엇입니까?

```
Answer : C
```

**Q. To the `test IP` stack on your local host, which IP address would you ping?**

로컬 호스트의 `테스트 IP` 스택에 어떤 IP 주소를 ping 하시겠습니까?

```
Answer : 127.0.0.1 (loop back address (루프백주소))
```

</br>

---

## Subnet Mask

### CIDR 표기

**Q. What is the CIDR notation of the _______ subnet mask?**

_______ 서브넷 마스크의 CIDR 표기법은 무엇입니까?

```
255.000.000.000 == /8
(11111111 00000000 00000000 00000000)

255.254.000.000 == /15
(11111111 11111110 00000000 00000000)

255.255.000.000 == /16

255.255.128.000 == /17

255.255.192.000 == /18

255.255.254.000 == /23

255.255.255.000 == /24

255.255.255.128 == /25

255.255.255.255 == /32
(11111111 11111111 11111111 11111111)
```

**Q. What is the default subnet mask for a class C network?**

클래스 C 네트워크의 기본 서브넷 마스크는 무엇입니까?

```
255.255.255.000
```

</br>

---

## Network/Boradcast address

### 네트워크 주소 구하기

#### 유형
```
what is th networt address of ~

```

**Q. What is the network address of a host with an IP address of ______**

IP 주소가 ______ 인 호스트의 네트워크 주소는 무엇입니까?


```
182.161.121.118/24

Answer : 182.161.121.0
Solution : (182.161.121.118) & (255.255.255.0) = 182.161.121.0
```

```
107.212.146.212/25

Answer : 107.212.146.128
Solution : (107.212.146.212) & (255.255.255.128) = 107.212.146.128
```

```
166.175.144.121/23

Answer : 166.175.144.0
Solution : (166.175.144.121) & (255.255.254.0) = 166.175.144.0
```

```
116.45.224.50/8

Answer : 116.0.0.0
Solution : (116.45.224.50) & (255.0.0.0) = 116.0.0.0
```

```
45.195.37.187/16

Answer : 45.195.0.0
Solution : (45.195.37.187) & (255.255.0.0) = 45.195.0.0
```

### 브로드캐스트 주소 구하기

#### 유형
```
What is the broadcast address of ~
```

**Q. What is the broadcast address of a host with an IP address of ______**

IP 주소가 ______ 인 호스트의 브로드 캐스트 주소는 무엇입니까?

```
51.254.122.100/24

Answer : 51.254.122.255
```

</br>

---

## Host address

### 호스트 주소수 구하기

#### 유형
```
What is the maximum number of IP addresses ~

You have an interface on a router with the IP address of ~
```

**Q. What is the maximum number of IP addresses that can be assigned to hosts on a local subnet using the _____ subnet mask?**

_____ 서브넷 마스크를 사용하여 로컬 서브넷의 호스트에 할당 할 수있는 최대 IP 주소 수는 얼마입니까?

```
255.224.0.0

Answer : 2097150
Solution : 2^(32 - 11) - 2 = 2097152 - 2 = 2097150
```

```
124.144.156.248/21

Answer : 2046
Solution : 2^(32 - 21) - 2 = 2048 - 2 = 2046

```

```
240.19.3.205/12

Answer : 1048574
Solution : 2^(32 - 12) - 2 = 1048576 - 2 = 1048574
```


**Q. You have an interface on a router with the IP address of ______ Including the router interface, how many hosts can have IP addresses on the local network connected to the router interface?**

IP 주소가 ______ 인 라우터에 인터페이스가 있습니다. 라우터 인터페이스를 포함하여 몇 개의 호스트가 라우터 인터페이스에 연결된 로컬 네트워크의 IP 주소를 가질 수 있습니까?

```
124.144.156.248/21

Answer : 2046
Solution : 2^(32 - 21) - 2 = 2048 - 2 = 2046
```

```
240.19.3.205/12

Answer : 1048574
Solution : 2^(32 - 12) - 2 = 1048576 - 2 = 1048574
```

### 호스트주소 범위 구하기

#### 유형
```
Which of the following proposals is the valid host range ~

You have an interface on a router with the IP address of ~
```

**Q. Which of the following proposals is the valid host range for the subnet on which the IP address _______ resides?**

다음 제안 중 IP 주소 ______가 상주하는 서브넷의 유효한 호스트 범위는 무엇입니까?

```
158.167.18.156/15

Answer : 158.166.0.1- 158.167.255.254
Solution : (Network)158.166.0.0 (Broadcast) 158.167.255.255
```

```
1.93.149.6/17

Answer : 1.93.128.1- 1.93.255.254
Solution : (Network)1.93.128.0 (Broadcast) 1.93.255.255
```

```
233.249.146.36/21

Answer : 233.249.144.1-233.249.151.254
Solution : (Network)233.249.144.0 (Broadcast) 233.249.151.255
```

### 호스트 주소 찾기

**Q. If the IP address ______ is assigned to an Ethernet port of a router, what host address could communicate with it?**

IP 주소 ______이 라우터의 이더넷 포트에 할당 된 경우 어떤 호스트 주소가 라우터와 통신 할 수 있습니까?

```
123.48.189.194/21

Answer : 123.48.189.109
Solution : (Network)123.48.184.0 (Broadcast) 123.48.191.255
```

</br>

---

## Public / Private IP address

Public(공인) IP주소

* 공인된 할당기관에서 할당해준 IP주소, 인터넷 상에서 사용할 수 있음

Private(사설) IP주소

* 내부 네트워크에서만 사용하는 IP주소, 인터넷 상에서 사용할 수 없음 (폐쇄형)

### Private(사설) IP 주소 대역

```
Class A : 10.0.0.0 ~ 10.255.255.255

Class B : 172.16.0.0 ~ 172.31.255.255

Class C : 192.168.0.0 ~ 192.168.255.255

```

</br>

---

## OSI Model

| 구분 | 계층 |  | 예시 |
|---|---|---|---|
|1 |물리 계층 | Physical Layer| |
|2 |데이터링크 계층| Data link Layer |  이더넷|
|3 |네트워크 계층 | Network Layer| IP, ICMP|
|4 |전송 계층 | Transport Layer| TCP, UDP|
|5 |세션 계층 |Session Layer | TLS/SSL|
|6 |표현 계층 | Presentation Layer| |
|7 |응용 계층 | Application Layer| DNS, DHCP, HTTP|

### OSI Model Layer 고르기

**Q. What are the different layers of the OSI model?**

OSI 모델의 다른 계층은 무엇입니까?

```
- Application - Presentation - Session - Transport - Network - Data Link - Physical
- Application - Mediation - Session - Transport - Network - Data Link - Physical
- Presentation - Session - Transport - Network - Data Link - Application - Real
- Relation - Transport - Session - Data Link - Mediation - Presentation - Application


Answer : Application - Presentation - Session - Transport - Network - Data Link - Physical

```

</br>

---

## Application Layer

### 응용 계층

### DNS/DHCP

### DNS

`Domain name system` translates Internet domain names and host names into IP addresses

`Domain name system`은 인터넷 도메인 이름과 호스트 이름을 IP 주소로 변환합니다.

</br>

### DHCP

**Q. You want to implement a mechanism that automates IP configuration, including IP address, subnet mask, default gateway and DNS information. What protocol will you use to achieve this?**

IP 주소, 서브넷 마스크, 기본 게이트웨이 및 DNS 정보를 포함하여 IP 구성을 자동화하는 메커니즘을 구현하려고합니다. 이를 달성하기 위해 어떤 프로토콜을 사용할 것인가
```
Answer : DHCP
```

**Q. What DHCP protocol does it use at the transport layer level?**

전송 계층 수준에서 어떤 DHCP 프로토콜을 사용합니까?

```
Answer : UDP
```

**Q. What type of address is supported by DHCP?**

DHCP는 어떤 유형의 주소를 지원합니까?

```
Answer : IPV4 and IPV6
```

**Q. DHCP is used for _____**

```
Answer : Both IPV6 and IPV4

DHCP는 _IPV6 및 IPV4_ 모두에 사용됩니다.
```


</br>

---
## Transport Layer

### 전송 계층

### TCP & UDP

**TCP & UDP는 Transport Layer(전송계층)에 속한다.**

</br>

### UDP

**UDP is a datagram oriented protocol**

UDP는 데이터 그램 지향 프로토콜입니다.

**UDP is faster, simpler and more efficient than TCP**

UDP는 TCP보다 빠르고 간단하며 효율적입니다.

**UDP only has the basic error control mechanism**

UDP에는 기본 오류 제어 메커니즘 만 있습니다.

**UDP supports broadcasting**

UDP는 broadcasting을 지원합니다

**UDP 사용 서비스**

DHCH, DNS, VoIP, IPTV, 온라인게임

</br>

### TCP

**TCP is a connection-oriented protocol**

TCP는 연결 지향 프로토콜입니다.

**The delivery of data to the destination can be guaranteed in TCP**

TCP는 목적지까지의 데이터 전달을 보장

**TCP is reliable because it guarantees the delivery of data to the router of the destination**

TCP는 목적지의 라우터로의 데이터 전달을 보장하기 때문에 신뢰할 수 있습니다.

**TCP is comparatively slower than UDP**

TCP는 UDP보다 비교적 느립니다

**TCP does not support broadcasting**

TCP는 브로드 캐스트를 지원하지 않습니다.

**TCP provides extended error checking mechanisms, because it provides flow control and data acknowledgement**

TCP는 흐름 제어 및 데이터 확인을 제공하기 때문에 확장 된 오류 검사 메커니즘을 제공합니다.

**Data sequencing is a TCP feature (this means that packets arrive in order in the recipient)**

데이터 시퀀싱은 TCP 기능입니다 (즉, 패킷이 수신자에게 순서대로 도착 함).

**TCP 사용 서비스**

웹브라우저에서 www 연결, 이메일 전송, 파일전송 등

</br>

### TCP UDP 간단히 비교)

`TCP`는 정확도와 보안을 중요하게 생각하는 대신 속도가 느리고,

`UDP`는 정확도나 보안을 포기하는 대신 속도가 굉장히 빠르다고 볼 수 있다

</br>

---

## Network Layer

* 네트워크 계층은 라우팅, 패킷 포워딩을 담당함
* ICMP (Internet Control Message Protocol)
	* 인터넷 제어 메세지 프로토콜
	* 네트워크 컴퓨터의 OS에서 오류 메시지를 전송받는 데 주로 쓰임
	* 'Echo request', 'Echo reply', 'Destination Unreachable', 'Time Exceeded' 등
	* 사용 : 핑(Ping), 트레이스라우트(traceroute)

**Q. Which protocol does Ping use?**

Ping은 어떤 프로토콜을 사용합니까?

```
Answer : ICMP

```

</br>

---

#### 참고 및 출처

[바로 가기](https://velog.io/@hidaehyunlee/Netwhat-%EC%97%B0%EC%8A%B5%EB%AC%B8%EC%A0%9C-%EC%A0%95%EB%A6%AC)

[바로 가기](https://github.com/365kim/42_cursus/tree/master/2_netwhat)

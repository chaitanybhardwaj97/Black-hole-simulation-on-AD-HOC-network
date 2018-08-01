# Black-hole-detection-in-AD-HOC-NETWORK
## Title:-Simulation of Black Hole attacks in Wireless AODV (Ad-Hoc On-demand Distance Vector) routing protocol

## Problem Statement- One of the most common attacks on the routing protocols now a days- Black Hole attack. To simulate a network with a malicious node(known as Black Hole) as to how the network functions under the situation of an attack.

Motivation- In today’s world, what is the most important need in the creation and maintenance of an Ad-hoc network? Safety it is! Along with fast and efficient network data transfer, making sure of the safety and reliability of data transfer is as important. Various kinds of attacks exist like
•	Passive Eavesdropping
•	Selective Existence (Selfish Nodes)
•	Gray Hole Attack (Routing Misbehaviour)
•	Black Hole Attack
•	Impersonation
•	Modification Attack
•	Attack Against The Routing Tables
•	Sleep Deprivation Torture Attack (Battery Exhaustion)
What we look forward to simulate is the Black Hole attack in the AODV routing protocol so as to easily understand the working of this attack and what to do to prevent it!

# Research papers- 
## •	Black Hole Attack and Detection Method for AODV Routing Protocol in MANETs
(International Journal of Advanced Research in Computer Engineering & Technology (IJARCET)

Causing packet loss due to attacks by malicious nodes is one of the most important problem in MANETs. There are many ways by which packet loss can occur in MANETs such as broken links, transmission errors, no route to the destination and attacks caused by malicious nodes. To determine the exact cause of packet loss in wireless network is a challenging task. In this paper, we have investigated packet loss problem caused by a malicious nodes that performs the well known attack called BlackHole attack in the network. To mitigate the effects of such attack, we have also proposed a detection technique that efficiently detects the malicious nodes in the network. We have done simulations using NS-3 simulator. BlackHole attack is also called sequence number attack because it is created using and modifying sequence number field in routing control packets. We have performed the attack and its detection method on a of the well known and largely used MANET routing protocol known as Ad Hoc Distance Vector (AODV) routing protocol. We have simulated this attack and determined effect of this attack on network performance by different network scenario. Furthermore, we have implemented a detection method that helps to isolates the malicious nodes in the network


## •	A Modified AODV – Algorithm for prevention of Black hole attack in Mobile Adhoc Networks
(International Journal of Conceptions on Electrical and Electronics Engineering)

MANETs are highly vulnerable to attacks due to their inherent characteristics like lack of infrastructure and complexity of wireless communication. Security is an essential requirement in mobile ad hoc networks. This paper analyzes the effect of black hole attack which is one of the possible attacks in ad hoc networks. In the first phase we simulate the effect of black hole nodes in the network for AODV routing protocol. In the second phase we have modified AODV routing protocol by tuning the parameters in the RREP packet for detection of the Black hole nodes. We have done simulations by changing the various parameters like number of nodes, mobility, black hole nodes using NS2. We have compared the results with traditional AODV for simulation matrix like PDR and End-to-End delay.

## •	SIMULATION OF BLACK HOLE ATTACK IN WIRELESS AD-HOC NETWORKS
(SIMULATION OF BLACK HOLE ATTACK IN WIRELESS AD-HOC NETWORKS
A MASTER’S THESIS in Computer Engineering Atılım University)

Wireless ad-hoc networks are composed of autonomous nodes that are self- managed
without any infrastructure. In this way, ad-hoc networks have a dynamic topology
such that nodes can easily join or leave the network at any time. They have many
potential applications, especially, in military and rescue areas such as connecting
soldiers on the battlefield or establishing a new network in place of a network which
collapsed after a disaster like an earthquake. Ad-hoc networks are suitable for areas
where it is not possible to set up a fixed infrastructure. Since the nodes communicate
with each other without an infrastructure, they provide the connectivity by
forwarding packets over themselves. To support this connectivity, nodes use some
routing protocols such as AODV (Ad-hoc On-Demand Distance Vector), DSR
(Dynamic Source Routing) and DSDV (Destination-Sequenced Distance-Vector).
Besides acting as a host, each node also acts as a router to discover a path and
forward packets to the correct node in the network.
The security issues related to Ad-hocs networks are various, the biggest one being Black Hole attacks.




## Platforms/Technology Used- 
•	Turbo C++
•	 NS2
 

## Proposed Work-
## Description
Ad-hoc Network- This network is called Independent Basic Service Set (IBSS) Stations in a IBSS communicate directly with each other and do not use an access point. Because of the mobility associated with ad-hoc networks, they are commonly called MANET (Mobile Ad-hoc NETwork). MANETs are self organized networks whose nodes are free to move randomly while being able to communicate with each other without the
help of an existing network infrastructure. MANETs are suitable for use in situations
where any wired or wireless infrastructure is inaccessible, overloaded, damaged or
destroyed such as emergency or rescue missions, disaster relief efforts and tactical
battlefields, as well as civilian MANET situations, such as conferences and
classrooms or in the research area like sensor networks. MANETs eliminate this
dependence on a fixed network infrastructure where each station acts as an
intermediate switch.
On-Demand Routing Protocols- These protocols take a lazy approach to routing. Compared to Table Driven Routing Protocols. On-Demand Routing Protocols are not maintained periodically,route tables are created when required. When the source node wants to connect to the destination node, it propagates the route request packet to its neighbors. Just as neighbors of the source node receive the broadcasted request packet, they forward the packet to their neighbors and this action is happen until the destination is found.
Afterward, the destination node sends a replay packet the source node in the shortest
path. The route remains in the route tables of the nodes through shortest path until
the route is no longer needed.
.
In our work, we have used Ad-Hoc On-Demand Distance Vector Routing (AODV)
and implemented Black Hole attack to this protocol. AODV protocol and Black Hole
Attack are detailed in next chapter.
Black Hole Attack- To carry out a black hole attack, malicious node waits for neighboring nodes to send RREQ messages. When the malicious node receives an RREQ message, without checking its routing table, immediately sends a false RREP message giving a route to destination over itself, assigning a high sequence number to settle in the routing table of the victim node, before other nodes send a true one. Therefore requesting nodes assume that route discovery process is completed and ignore other RREP messages and begin to send packets over malicious node.
Malicious node attacks all RREQ messages this way and takes over all routes.
Therefore all packets are sent to a point when they are not forwarding anywhere.
This is called a black hole akin to real meaning which swallows all objects and
matter. To succeed a black hole attack, malicious node should be positioned at the
center of the wireless network.
If malicious node masquerades false RREP message as if it comes from another
victim node instead of itself, all messages will be forwarded to the victim node. By
doing this, victim node will have to process all incoming messages and is subjected
to a sleep deprivation attack.

Gray hole attacks against one or two nodes in the network to isolate them, where as
black hole attack affects the whole network. Moreover, the malicious node that
attempts gray hole attacks cannot be perceived easily since it does not send false
messages. Behaviour of failed or overloaded nodes may seem like selfish nodes
attacks or gray hole attacks due to dropping of messages. But, since failed nodes
cannot fabricate a new control message, they cannot form a black hole attack
although they will drop the message later.


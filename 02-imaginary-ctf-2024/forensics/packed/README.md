# Packed

## Problem

Packet Tracer is a cross-platform visual simulation tool designed by Cisco Systems that allows users to create network topologies and imitate modern computer networks. The software allows users to simulate the configuration of Cisco routers and switches using a simulated command line interface. (same attachment as routed)

## Solution

`binwalk routed.pkz` then you'll see that the file is a zip file

`mv routed.pkz routed.zip` then you can unzip it by `unzip routed.zip`

you can see the flag in secret.png

FLAG: `ictf{ab4697882634d4aeb6f21141ea2724d0}`
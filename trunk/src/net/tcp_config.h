/*
 * Copyright (c) 2012 by Paweł Lebioda <pawel.lebioda89@gmail.com>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _TCP_CONFIG_H
#define _TCP_CONFIG_H

#include "net.h"
#include "net_config.h"

#define TCP_MAX_SOCKETS		3

#define TCP_MSS			(ETHERNET_MAX_PACKET_SIZE - NET_HEADER_SIZE_ETHERNET - NET_HEADER_SIZE_IP - NET_HEADER_SIZE_TCP)	


#define TCP_TIMEOUT_GENERIC 	0x10
#define TCP_TIMEOUT_ARP_MAC	0x4
#define TCP_TIMEOUT_IDLE	0xff

#define TCP_RTX_ARP_MAC		4
/* number of allowed retransmission of SYN, ACK packet */
#define TCP_RTX_SYN_ACK		4
#define TCP_RTX_SYN		5


#endif //_TCP_CONFIG_H
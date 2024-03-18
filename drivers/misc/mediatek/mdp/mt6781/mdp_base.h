/*
 * Copyright (C) 2020 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __MDP_BASE_H__
#define __MDP_BASE_H__

#define MDP_HW_CHECK

#include "mach/mt_iommu.h"

static u32 mdp_engine_port[ENGBASE_COUNT] = {
	0,	//ENGBASE_MMSYS_CONFIG,
	M4U_PORT_L2_MDP_RDMA0,	//ENGBASE_MDP_RDMA0,
	0,	//ENGBASE_MDP_AAL0,
	0,	//ENGBASE_MDP_HDR0,
	0,	//ENGBASE_MDP_RSZ0,
	0,	//ENGBASE_MDP_RSZ1,
	M4U_PORT_L2_MDP_WROT0,	//ENGBASE_MDP_WROT0,
	M4U_PORT_L2_MDP_WROT1,	//ENGBASE_MDP_WROT1,
	0,	//ENGBASE_MDP_TDSHP0,
	0,	//ENGBASE_MMSYS_MUTEX,
	0,	//ENGINE_IMGSYS
	0,	//ENGINE_IMGSYS2_CONFIG
	0,	//ENGBASE_ISP_DIP_A0
	0,	//ENGBASE_ISP_DIP_A1
	0,	//ENGBASE_ISP_DIP_A7
	0,	//ENGBASE_ISP_MSS_B
	0,	//ENGBASE_ISP_MFB_B
};

static u32 mdp_base[ENGBASE_COUNT] = {
	[ENGBASE_MMSYS_CONFIG] = 0x1b000000,
	[ENGBASE_MDP_RDMA0] = 0x1b003000,
	[ENGBASE_MDP_AAL0] = 0x1b005000,
	[ENGBASE_MDP_HDR0] = 0x1b007000,
	[ENGBASE_MDP_RSZ0] = 0x1b008000,
	[ENGBASE_MDP_RSZ1] = 0x1b009000,
	[ENGBASE_MDP_WROT0] = 0x1b00a000,
	[ENGBASE_MDP_WROT1] = 0x1b00b000,
	[ENGBASE_MDP_TDSHP0] = 0x1b00c000,
	[ENGBASE_MMSYS_MUTEX] = 0x1b001000,
	[ENGBASE_IMGSYS] = 0x15020000,
	[ENGBASE_IMGSYS2_CONFIG] = 0x15820000,
	[ENGBASE_ISP_DIP_A0] = 0x15021000,
	[ENGBASE_ISP_DIP_A1] = 0x15022000,
	[ENGBASE_ISP_DIP_A7] = 0x15028000,
	[ENGBASE_ISP_MSS_B] = 0x15812000,
	[ENGBASE_ISP_MFB_B] = 0x15810000,
};

#endif

/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef _CCU_PLATFORM_DEF_
#define _CCU_PLATFORM_DEF_

#include "m4u.h"

/*For user/kernel space sync.*/
#define CCU_HW_OFFSET  (0x0)
#define CCU_PMEM_BASE  (0x1A090000)
#define CCU_CORE_PMEM_BASE  (0x00000000)
#define CCU_PMEM_SIZE  (0x8000)
#define CCU_DMEM_BASE  (0x1A080000)
#define CCU_CORE_DMEM_BASE  (0x80000000)
#define CCU_DMEM_SIZE  (0x8000)
#define CCU_DMEM_OFFSET  (0x0)
#define CCU_LOG_SIZE  (0x400)
#define CCU_ISR_LOG_SIZE (0x200)
#define CCU_HW_DUMP_SIZE  (0x550)
#define CCU_CACHE_SIZE  (0x40000)
#define CCU_CACHE_BASE (0x10000000)
#define CCU_CTRL_BUF_TOTAL_SIZE  (0x1600000)
#define CCU_CPUREF_BUF_TOTAL_SIZE  (0x2000000)
#define CCU_CPUREF_BUF_ALIGN_SIZE  (0x1000000)
#define CCU_CPUREF_BUF_ALIGN_MASK  (0xFE000000)
#define CCU_CAMSYS_BASE  (0x1A000000)
#define CCU_CAMSYS_SIZE  (0x1000)
#define CCU_N3D_A_BASE  (0x1A040000)
#define CCU_N3D_A_SIZE  (0x1000)
#define CCU_SENSOR_BIN_SIZE  (0x4000)

#define CCU_DDR_BUF_MVA_LOWER_BOUND  (0x40000000)
#define CCU_DDR_BUF_MVA_UPPER_BOUND  (0x41000000-1)
#define CCU_CTRL_BUFS_LOWER_BOUND  (0x41000000)
#define CCU_CTRL_BUFS_UPPER_BOUND  (0x48000000-1)

#define CCU_DRAM_LOG_BUF_CNT (2)
#define CCU_DRAM_LOG_BUF_SIZE (1024 * 1024) //1MB

#define OFFSET_CCU_SHARED_BUF_MAP_BASE 0 //at DCCM start
#define OFFSET_CCU_INT_TRG (0x3C/4)
#define CCU_IPC_IBUF_CAPACITY (4096) //4k
#define CCU_IPC_OBUF_CAPACITY (1024) //1k

#ifdef MTK_CCU_EMULATOR
/*#define CCUI_OF_M4U_PORT M4U_PORT_CAM_IMGI*/
/*#define CCUI_OF_M4U_PORT M4U_PORT_CAM_CCUI*/
/*#define CCUO_OF_M4U_PORT M4U_PORT_CAM_CCUO*/
/*#define CCUG_OF_M4U_PORT M4U_PORT_CAM_CCUG*/
#else
#define CCUI_OF_M4U_PORT M4U_PORT_CCUI
#define CCUO_OF_M4U_PORT M4U_PORT_CCUO
#define CCUG_OF_M4U_PORT M4U_PORT_CCUG
#endif

#define CCU_HEADER_NUM (20)

#define MMU_ENABLE_BIT           0x33//ccu Cache to EMI enable
#endif

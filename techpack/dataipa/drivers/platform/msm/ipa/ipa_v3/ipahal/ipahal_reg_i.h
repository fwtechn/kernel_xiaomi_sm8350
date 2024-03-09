/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2012-2020, The Linux Foundation. All rights reserved.
 */

#ifndef _IPAHAL_REG_I_H_
#define _IPAHAL_REG_I_H_

int ipahal_reg_init(enum ipa_hw_type ipa_hw_type);

#define IPA_SETFIELD(val, shift, mask) (((val) << (shift)) & (mask))
#define IPA_SETFIELD_IN_REG(reg, val, shift, mask) \
			(reg |= ((val) << (shift)) & (mask))
#define IPA_GETFIELD_FROM_REG(reg, shift, mask) \
		(((reg) & (mask)) >> (shift))


/* IPA_ROUTE register */
#define IPA_ROUTE_ROUTE_DIS_SHFT 0x0
#define IPA_ROUTE_ROUTE_DIS_BMSK 0x1
#define IPA_ROUTE_ROUTE_DEF_PIPE_SHFT 0x1
#define IPA_ROUTE_ROUTE_DEF_PIPE_BMSK 0x3e
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_SHFT 0x6
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_BMSK 0X40
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_SHFT 0x7
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_BMSK 0x1ff80
#define IPA_ROUTE_ROUTE_FRAG_DEF_PIPE_BMSK 0x3e0000
#define IPA_ROUTE_ROUTE_FRAG_DEF_PIPE_SHFT 0x11
#define IPA_ROUTE_ROUTE_DEF_RETAIN_HDR_BMSK  0x1000000
#define IPA_ROUTE_ROUTE_DEF_RETAIN_HDR_SHFT 0x18

/* IPA_ENDP_INIT_HDR_n register */
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_BMSK 0x3f
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_SHFT 0x0
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_BMSK 0x40
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_SHFT 0x6
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_SHFT 0x7
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_BMSK 0x1f80
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_BMSK 0x7e000
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_SHFT 0xd
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_BMSK 0x80000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_SHFT 0x13
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_BMSK 0x3f00000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_SHFT 0x14
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_BMSK 0x4000000
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_SHFT 0x1a
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_INC_DEAGG_HDR_BMSK 0x8000000
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_INC_DEAGG_HDR_SHFT 0x1b
#define IPA_ENDP_INIT_HDR_n_HDR_METADATA_REG_VALID_BMSK 0x10000000
#define IPA_ENDP_INIT_HDR_n_HDR_METADATA_REG_VALID_SHFT 0x1c

#define IPA_ENDP_INIT_HDR_n_HDR_LEN_BMSK_v4_5 0x3f
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_SHFT_v4_5 0x0
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_BMSK_v4_5 0x40
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_SHFT_v4_5 0x6
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_SHFT_v4_5 0x7
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_BMSK_v4_5 0x1f80
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_BMSK_v4_5 0x7e000
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_SHFT_v4_5 0xd
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_BMSK_v4_5 0x80000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_SHFT_v4_5 0x13
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_BMSK_v4_5 0x3f00000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_SHFT_v4_5 0x14
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_BMSK_v4_5 0x4000000
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_SHFT_v4_5 0x1a
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_INC_DEAGG_HDR_BMSK_v4_5 0x8000000
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_INC_DEAGG_HDR_SHFT_v4_5 0x1b
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_MSB_BMSK_v4_5 0x30000000
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_MSB_SHFT_v4_5 0x1c
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_MSB_BMSK_v4_5 0xc0000000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_MSB_SHFT_v4_5 0x1e

/* IPA_ENDP_INIT_HDR_EXT_n register */
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ENDIANNESS_BMSK 0x1
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ENDIANNESS_SHFT 0x0
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_VALID_BMSK 0x2
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_VALID_SHFT 0x1
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_BMSK 0x4
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_SHFT 0x2
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAYLOAD_LEN_INC_PADDING_BMSK 0x8
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAYLOAD_LEN_INC_PADDING_SHFT 0x3
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_BMSK 0x3f0
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_SHFT 0x4
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAD_TO_ALIGNMENT_SHFT 0xa
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAD_TO_ALIGNMENT_BMSK 0x3c00
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_MSB_SHFT_v4_5 0x10
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_MSB_BMSK_v4_5 \
									0x30000
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_OFST_PKT_SIZE_MSB_SHFT_v4_5 0x12
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_OFST_PKT_SIZE_MSB_BMSK_v4_5 0xC0000
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ADDITIONAL_CONST_LEN_MSB_SHFT_v4_5 0x14
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ADDITIONAL_CONST_LEN_MSB_BMSK_v4_5 0x300000

/* IPA_ENDP_INIT_AGGR_n register */
#define IPA_ENDP_INIT_AGGR_n_AGGR_HARD_BYTE_LIMIT_ENABLE_BMSK	0x1000000
#define IPA_ENDP_INIT_AGGR_n_AGGR_HARD_BYTE_LIMIT_ENABLE_SHFT	0x18
#define IPA_ENDP_INIT_AGGR_n_AGGR_FORCE_CLOSE_BMSK 0x400000
#define IPA_ENDP_INIT_AGGR_n_AGGR_FORCE_CLOSE_SHFT 0x16
#define IPA_ENDP_INIT_AGGR_n_AGGR_SW_EOF_ACTIVE_BMSK	0x200000
#define IPA_ENDP_INIT_AGGR_n_AGGR_SW_EOF_ACTIVE_SHFT	0x15
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_BMSK 0x1f8000
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_SHFT 0xf
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_BMSK 0x7c00
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_SHFT 0xa
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_BMSK 0x3e0
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_SHFT 0x5
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_BMSK 0x1c
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_SHFT 0x2
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_BMSK 0x3
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_SHFT 0x0

#define IPA_ENDP_INIT_AGGR_n_AGGR_GRAN_SEL_BMSK_V4_5 0x8000000
#define IPA_ENDP_INIT_AGGR_n_AGGR_GRAN_SEL_SHFT_V4_5 27
#define IPA_ENDP_INIT_AGGR_n_AGGR_HARD_BYTE_LIMIT_ENABLE_BMSK_V4_5 0x4000000
#define IPA_ENDP_INIT_AGGR_n_AGGR_HARD_BYTE_LIMIT_ENABLE_SHFT_V4_5 26
#define IPA_ENDP_INIT_AGGR_n_AGGR_FORCE_CLOSE_BMSK_V4_5 0x1000000
#define IPA_ENDP_INIT_AGGR_n_AGGR_FORCE_CLOSE_SHFT_V4_5 24
#define IPA_ENDP_INIT_AGGR_n_AGGR_SW_EOF_ACTIVE_BMSK_V4_5 0x800000
#define IPA_ENDP_INIT_AGGR_n_AGGR_SW_EOF_ACTIVE_SHFT_V4_5 23
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_BMSK_V4_5 0x7e0000
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_SHFT_V4_5 17
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_BMSK_V4_5 0x1f000
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_SHFT_V4_5 12
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_BMSK_V4_5 0x7e0
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_SHFT_V4_5 5
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_BMSK_V4_5 0x1c
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_SHFT_V4_5 2
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_BMSK_V4_5 0x3
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_SHFT_V4_5 0

/* IPA_AGGR_FORCE_CLOSE register */
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK 0x3fffffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT 0
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK_V3_5 0xfffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT_V3_5 0
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK_V4_0 0x7fffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT_V4_0 0
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK_V4_2 0x1ffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT_V4_2 0
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK_V4_5 0x7fffffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT_V4_5 0
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK_V4_7 0x7fffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT_V4_7 0

/* IPA_ENDP_INIT_ROUTE_n register */
#define IPA_ENDP_INIT_ROUTE_n_ROUTE_TABLE_INDEX_BMSK 0x1f
#define IPA_ENDP_INIT_ROUTE_n_ROUTE_TABLE_INDEX_SHFT 0x0

/* IPA_ENDP_INIT_MODE_n register */
#define IPA_ENDP_INIT_MODE_n_HDR_FTCH_DISABLE_BMSK 0x40000000
#define IPA_ENDP_INIT_MODE_n_HDR_FTCH_DISABLE_SHFT 0x1e
#define IPA_ENDP_INIT_MODE_n_PAD_EN_BMSK 0x20000000
#define IPA_ENDP_INIT_MODE_n_PAD_EN_SHFT 0x1d
#define IPA_ENDP_INIT_MODE_n_PIPE_REPLICATION_EN_BMSK 0x10000000
#define IPA_ENDP_INIT_MODE_n_PIPE_REPLICATION_EN_SHFT 0x1c
#define IPA_ENDP_INIT_MODE_n_BYTE_THRESHOLD_BMSK 0xffff000
#define IPA_ENDP_INIT_MODE_n_BYTE_THRESHOLD_SHFT 0xc
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_BMSK 0x1f0
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_SHFT 0x4
#define IPA_ENDP_INIT_MODE_n_MODE_BMSK 0x7
#define IPA_ENDP_INIT_MODE_n_MODE_SHFT 0x0

#define IPA_ENDP_INIT_MODE_n_PAD_EN_BMSK_V4_5 0x20000000
#define IPA_ENDP_INIT_MODE_n_PAD_EN_SHFT_V4_5 0x1d
#define IPA_ENDP_INIT_MODE_n_PIPE_REPLICATION_EN_BMSK_V4_5 0x10000000
#define IPA_ENDP_INIT_MODE_n_PIPE_REPLICATION_EN_SHFT_V4_5 0x1c
#define IPA_ENDP_INIT_MODE_n_BYTE_THRESHOLD_BMSK_V4_5 0xffff000
#define IPA_ENDP_INIT_MODE_n_BYTE_THRESHOLD_SHFT_V4_5 0xc
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_BMSK_V4_5 0x1f0
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_SHFT_V4_5 0x4
#define IPA_ENDP_INIT_MODE_n_DCPH_ENABLE_BMSK_V4_5 0x8
#define IPA_ENDP_INIT_MODE_n_DCPH_ENABLE_SHFT_V4_5 0x3
#define IPA_ENDP_INIT_MODE_n_MODE_BMSK_V4_5 0x7
#define IPA_ENDP_INIT_MODE_n_MODE_SHFT_V4_5 0x0

/* IPA_ENDP_INIT_NAT_n register */
#define IPA_ENDP_INIT_NAT_n_NAT_EN_BMSK 0x3
#define IPA_ENDP_INIT_NAT_n_NAT_EN_SHFT 0x0

/* IPA_ENDP_INIT_CONN_TRACK_n register */
#define IPA_ENDP_INIT_CONN_TRACK_n_CONN_TRACK_EN_BMSK 0x1
#define IPA_ENDP_INIT_CONN_TRACK_n_CONN_TRACK_EN_SHFT 0x0

/* IPA_ENDP_INIT_CTRL_n register */
#define IPA_ENDP_INIT_CTRL_n_ENDP_SUSPEND_BMSK 0x1
#define IPA_ENDP_INIT_CTRL_n_ENDP_SUSPEND_SHFT 0x0
#define IPA_ENDP_INIT_CTRL_n_ENDP_DELAY_BMSK 0x2
#define IPA_ENDP_INIT_CTRL_n_ENDP_DELAY_SHFT 0x1

/* IPA_ENDP_INIT_CTRL_SCND_n register */
#define IPA_ENDP_INIT_CTRL_SCND_n_ENDP_DELAY_BMSK 0x2
#define IPA_ENDP_INIT_CTRL_SCND_n_ENDP_DELAY_SHFT 0x1

/* IPA_ENDP_INIT_HOL_BLOCK_EN_n register */
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_RMSK 0x1
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_MAX 19
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_MAX_V_4_0 22
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_EN_BMSK 0x1
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_EN_SHFT 0x0

/* IPA_ENDP_INIT_HOL_BLOCK_TIMER_n register */
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_TIMER_BMSK 0xffffffff
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_TIMER_SHFT 0x0

#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_BASE_VALUE_SHFT_V_4_2 0
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_BASE_VALUE_BMSK_V_4_2 0x1f
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_SCALE_SHFT_V_4_2  0x8
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_SCALE_BMSK_V_4_2 0x1f00

#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_TIME_LIMIT_BMSK_V4_5 0x1F
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_TIME_LIMIT_SHFT_V4_5 0
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_GRAN_SEL_BMSK_V4_5 0x100
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_GRAN_SEL_SHFT_V4_5 8

/* IPA_ENDP_INIT_DEAGGR_n register */
#define IPA_ENDP_INIT_DEAGGR_n_MAX_PACKET_LEN_BMSK 0xFFFF0000
#define IPA_ENDP_INIT_DEAGGR_n_MAX_PACKET_LEN_SHFT 0x10
#define IPA_ENDP_INIT_DEAGGR_n_IGNORE_MIN_PKT_ERR_BMSK 0x4000
#define IPA_ENDP_INIT_DEAGGR_n_IGNORE_MIN_PKT_ERR_SHFT 0xe
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_LOCATION_BMSK 0x3F00
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_LOCATION_SHFT 0x8
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_VALID_BMSK  0x80
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_VALID_SHFT 0x7
#define IPA_ENDP_INIT_DEAGGR_n_SYSPIPE_ERR_DETECTION_BMSK 0x40
#define IPA_ENDP_INIT_DEAGGR_n_SYSPIPE_ERR_DETECTION_SHFT 0x6
#define IPA_ENDP_INIT_DEAGGR_n_DEAGGR_HDR_LEN_BMSK 0x3F
#define IPA_ENDP_INIT_DEAGGR_n_DEAGGR_HDR_LEN_SHFT 0x0

/* IPA_IPA_ENDP_INIT_SEQ_n register */
#define IPA_ENDP_INIT_SEQ_n_DPS_REP_SEQ_TYPE_BMSK 0xf000
#define IPA_ENDP_INIT_SEQ_n_DPS_REP_SEQ_TYPE_SHFT 0xc
#define IPA_ENDP_INIT_SEQ_n_HPS_REP_SEQ_TYPE_BMSK 0xf00
#define IPA_ENDP_INIT_SEQ_n_HPS_REP_SEQ_TYPE_SHFT 0x8
#define IPA_ENDP_INIT_SEQ_n_DPS_SEQ_TYPE_BMSK 0xf0
#define IPA_ENDP_INIT_SEQ_n_DPS_SEQ_TYPE_SHFT 0x4
#define IPA_ENDP_INIT_SEQ_n_HPS_SEQ_TYPE_BMSK 0xf
#define IPA_ENDP_INIT_SEQ_n_HPS_SEQ_TYPE_SHFT 0x0

/* IPA_DEBUG_CNT_REG_m register */
#define IPA_DEBUG_CNT_REG_N_RMSK 0xffffffff
#define IPA_DEBUG_CNT_REG_N_MAX 15
#define IPA_DEBUG_CNT_REG_N_DBG_CNT_REG_BMSK 0xffffffff
#define IPA_DEBUG_CNT_REG_N_DBG_CNT_REG_SHFT 0x0

/* IPA_ENDP_INIT_CFG_n register */
#define IPA_ENDP_INIT_CFG_n_CS_GEN_QMB_MASTER_SEL_BMSK 0x100
#define IPA_ENDP_INIT_CFG_n_CS_GEN_QMB_MASTER_SEL_SHFT 0x8
#define IPA_ENDP_INIT_CFG_n_CS_METADATA_HDR_OFFSET_BMSK 0x78
#define IPA_ENDP_INIT_CFG_n_CS_METADATA_HDR_OFFSET_SHFT 0x3
#define IPA_ENDP_INIT_CFG_n_CS_OFFLOAD_EN_BMSK 0x6
#define IPA_ENDP_INIT_CFG_n_CS_OFFLOAD_EN_SHFT 0x1
#define IPA_ENDP_INIT_CFG_n_FRAG_OFFLOAD_EN_BMSK 0x1
#define IPA_ENDP_INIT_CFG_n_FRAG_OFFLOAD_EN_SHFT 0x0

/* IPA_ENDP_INIT_HDR_METADATA_MASK_n register */
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_METADATA_MASK_BMSK 0xffffffff
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_METADATA_MASK_SHFT 0x0

/* IPA_IPA_ENDP_INIT_HDR_METADATA_n register */
#define IPA_ENDP_INIT_HDR_METADATA_n_METADATA_BMSK 0xffffffff
#define IPA_ENDP_INIT_HDR_METADATA_n_METADATA_SHFT 0x0

/* IPA_ENDP_INIT_RSRC_GRP_n register */
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_BMSK 0x7
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_SHFT 0
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_BMSK_v3_5 0x3
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_SHFT_v3_5 0
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_BMSK_v4_5 0x7
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_SHFT_v4_5 0
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_BMSK_v4_9 0x3
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_SHFT_v4_9 0

/* IPA_SHARED_MEM_SIZE register */
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_BADDR_BMSK 0xffff0000
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_BADDR_SHFT 0x10
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_BMSK  0xffff
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_SHFT  0x0

/* IPA_DEBUG_CNT_CTRL_n register */
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_PIPE_RULE_BMSK 0x10000000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_PIPE_RULE_SHFT 0x1c
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_BMSK 0x0ff00000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_BMSK_V3_5 0x1ff00000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_SHFT 0x14
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_SOURCE_PIPE_BMSK 0x1f000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_SOURCE_PIPE_SHFT 0xc
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_PRODUCT_BMSK 0x100
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_PRODUCT_SHFT 0x8
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_TYPE_BMSK 0x70
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_TYPE_SHFT 0x4
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_EN_BMSK 0x1
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_EN_SHFT 0x0

/* IPA_FILT_ROUT_HASH_FLUSH register */
#define IPA_FILT_ROUT_HASH_FLUSH_IPv4_FILT_SHFT 12
#define IPA_FILT_ROUT_HASH_FLUSH_IPv4_ROUT_SHFT 8
#define IPA_FILT_ROUT_HASH_FLUSH_IPv6_FILT_SHFT 4
#define IPA_FILT_ROUT_HASH_FLUSH_IPv6_ROUT_SHFT 0

/* IPA_SINGLE_NDP_MODE register */
#define IPA_SINGLE_NDP_MODE_UNDEFINED_BMSK 0xfffffffe
#define IPA_SINGLE_NDP_MODE_UNDEFINED_SHFT 0x1
#define IPA_SINGLE_NDP_MODE_SINGLE_NDP_EN_BMSK 0x1
#define IPA_SINGLE_NDP_MODE_SINGLE_NDP_EN_SHFT 0

/* IPA_QCNCM register */
#define IPA_QCNCM_MODE_UNDEFINED2_BMSK 0xf0000000
#define IPA_QCNCM_MODE_UNDEFINED2_SHFT 0x1c
#define IPA_QCNCM_MODE_VAL_BMSK 0xffffff0
#define IPA_QCNCM_MODE_VAL_SHFT 0x4
#define IPA_QCNCM_UNDEFINED1_BMSK 0xe
#define IPA_QCNCM_UNDEFINED1_SHFT 0x1
#define IPA_QCNCM_MODE_EN_BMSK 0x1
#define IPA_QCNCM_MODE_EN_SHFT 0

/* IPA_ENDP_STATUS_n register */
#define IPA_ENDP_STATUS_n_STATUS_PKT_SUPPRESS_BMSK 0x200
#define IPA_ENDP_STATUS_n_STATUS_PKT_SUPPRESS_SHFT 0x9
#define IPA_ENDP_STATUS_n_STATUS_LOCATION_BMSK 0x100
#define IPA_ENDP_STATUS_n_STATUS_LOCATION_SHFT 0x8
#define IPA_ENDP_STATUS_n_STATUS_ENDP_BMSK 0x3e
#define IPA_ENDP_STATUS_n_STATUS_ENDP_SHFT 0x1
#define IPA_ENDP_STATUS_n_STATUS_EN_BMSK 0x1
#define IPA_ENDP_STATUS_n_STATUS_EN_SHFT 0x0

/* IPA_CLKON_CFG register */
#define IPA_CLKON_CFG_CGC_OPEN_DPL_FIFO_BMSK_V4_5  0x40000000
#define IPA_CLKON_CFG_CGC_OPEN_DPL_FIFO_SHFT_V4_5 30
#define IPA_CLKON_CFG_OPEN_GLOBAL_2X_CLK_BMSK  0x20000000
#define IPA_CLKON_CFG_OPEN_GLOBAL_2X_CLK_SHFT 29
#define IPA_CLKON_CFG_OPEN_GLOBAL_BMSK 0x10000000
#define IPA_CLKON_CFG_OPEN_GLOBAL_SHFT 28
#define IPA_CLKON_CFG_OPEN_GSI_IF_BMSK 0x8000000
#define IPA_CLKON_CFG_OPEN_GSI_IF_SHFT 27
#define IPA_CLKON_CFG_OPEN_WEIGHT_ARB_SHFT 26
#define IPA_CLKON_CFG_OPEN_WEIGHT_ARB_BMSK 0x4000000
#define IPA_CLKON_CFG_OPEN_QMB_SHFT 25
#define IPA_CLKON_CFG_OPEN_QMB_BMSK 0x2000000
#define IPA_CLKON_CFG_OPEN_RAM_SLAVEWAY_SHFT 24
#define IPA_CLKON_CFG_OPEN_RAM_SLAVEWAY_BMSK 0x1000000
#define IPA_CLKON_CFG_OPEN_AGGR_WRAPPER_SHFT 23
#define IPA_CLKON_CFG_OPEN_AGGR_WRAPPER_BMSK 0x800000
#define IPA_CLKON_CFG_OPEN_QSB2AXI_CMDQ_L_SHFT 22
#define IPA_CLKON_CFG_OPEN_QSB2AXI_CMDQ_L_BMSK 0x400000
#define IPA_CLKON_CFG_OPEN_FNR_SHFT 21
#define IPA_CLKON_CFG_OPEN_FNR_BMSK 0x200000
#define IPA_CLKON_CFG_OPEN_TX_1_SHFT 20
#define IPA_CLKON_CFG_OPEN_TX_1_BMSK 0x100000
#define IPA_CLKON_CFG_OPEN_TX_0_SHFT 19
#define IPA_CLKON_CFG_OPEN_TX_0_BMSK 0x80000
#define IPA_CLKON_CFG_OPEN_NTF_TX_CMDQS_SHFT 18
#define IPA_CLKON_CFG_OPEN_NTF_TX_CMDQS_BMSK 0x40000
#define IPA_CLKON_CFG_OPEN_DCMP_SHFT 17
#define IPA_CLKON_CFG_OPEN_DCMP_BMSK 0x20000
#define IPA_CLKON_CFG_OPEN_H_DCPH_SHFT 16
#define IPA_CLKON_CFG_OPEN_H_DCPH_BMSK 0x10000
#define IPA_CLKON_CFG_OPEN_D_DCPH_SHFT 15
#define IPA_CLKON_CFG_OPEN_D_DCPH_BMSK 0x8000
#define IPA_CLKON_CFG_OPEN_ACK_MNGR_SHFT 14
#define IPA_CLKON_CFG_OPEN_ACK_MNGR_BMSK 0x4000
#define IPA_CLKON_CFG_OPEN_CTX_HANDLER_SHFT 13
#define IPA_CLKON_CFG_OPEN_CTX_HANDLER_BMSK 0x2000
#define IPA_CLKON_CFG_OPEN_RSRC_MNGR_SHFT 12
#define IPA_CLKON_CFG_OPEN_RSRC_MNGR_BMSK 0x1000
#define IPA_CLKON_CFG_OPEN_DPS_TX_CMDQS_SHFT 11
#define IPA_CLKON_CFG_OPEN_DPS_TX_CMDQS_BMSK 0x800
#define IPA_CLKON_CFG_OPEN_HPS_DPS_CMDQS_SHFT 10
#define IPA_CLKON_CFG_OPEN_HPS_DPS_CMDQS_BMSK 0x400
#define IPA_CLKON_CFG_OPEN_RX_HPS_CMDQS_SHFT 9
#define IPA_CLKON_CFG_OPEN_RX_HPS_CMDQS_BMSK 0x200
#define IPA_CLKON_CFG_OPEN_DPS_SHFT 8
#define IPA_CLKON_CFG_OPEN_DPS_BMSK 0x100
#define IPA_CLKON_CFG_OPEN_HPS_SHFT 7
#define IPA_CLKON_CFG_OPEN_HPS_BMSK 0x80
#define IPA_CLKON_CFG_OPEN_FTCH_DPS_SHFT 6
#define IPA_CLKON_CFG_OPEN_FTCH_DPS_BMSK 0x40
#define IPA_CLKON_CFG_OPEN_FTCH_HPS_SHFT 5
#define IPA_CLKON_CFG_OPEN_FTCH_HPS_BMSK 0x20
#define IPA_CLKON_CFG_OPEN_RAM_ARB_SHFT 4
#define IPA_CLKON_CFG_OPEN_RAM_ARB_BMSK 0x10
#define IPA_CLKON_CFG_OPEN_MISC_SHFT 3
#define IPA_CLKON_CFG_OPEN_MISC_BMSK 0x8
#define IPA_CLKON_CFG_OPEN_TX_WRAPPER_SHFT 2
#define IPA_CLKON_CFG_OPEN_TX_WRAPPER_BMSK 0x4
#define IPA_CLKON_CFG_OPEN_PROC_SHFT 1
#define IPA_CLKON_CFG_OPEN_PROC_BMSK 0x2
#define IPA_CLKON_CFG_OPEN_RX_BMSK 0x1
#define IPA_CLKON_CFG_OPEN_RX_SHFT 0

/* IPA_QTIME_TIMESTAMP_CFG register */
#define IPA_QTIME_TIMESTAMP_CFG_DPL_TIMESTAMP_LSB_SHFT 0
#define IPA_QTIME_TIMESTAMP_CFG_DPL_TIMESTAMP_LSB_BMSK 0x1F
#define IPA_QTIME_TIMESTAMP_CFG_DPL_TIMESTAMP_SEL_SHFT 7
#define IPA_QTIME_TIMESTAMP_CFG_DPL_TIMESTAMP_SEL_BMSK 0x80
#define IPA_QTIME_TIMESTAMP_CFG_TAG_TIMESTAMP_LSB_SHFT 8
#define IPA_QTIME_TIMESTAMP_CFG_TAG_TIMESTAMP_LSB_BMSK 0x1F00
#define IPA_QTIME_TIMESTAMP_CFG_NAT_TIMESTAMP_LSB_SHFT 16
#define IPA_QTIME_TIMESTAMP_CFG_NAT_TIMESTAMP_LSB_BMSK 0x1F0000

/* IPA_TIMERS_PULSE_GRAN_CFG register */
#define IPA_TIMERS_PULSE_GRAN_CFG_GRAN_X_SHFT(x) (3 * (x))
#define IPA_TIMERS_PULSE_GRAN_CFG_GRAN_X_BMSK(x) (0x7 << (3 * (x)))

/* IPA_TIMERS_XO_CLK_DIV_CFG register */
#define IPA_TIMERS_XO_CLK_DIV_CFG_VALUE_SHFT 0
#define IPA_TIMERS_XO_CLK_DIV_CFG_VALUE_BMSK 0x1FF
#define IPA_TIMERS_XO_CLK_DIV_CFG_ENABLE_SHFT 31
#define IPA_TIMERS_XO_CLK_DIV_CFG_ENABLE_BMSK 0x80000000

/* IPA_ENDP_FILTER_ROUTER_HSH_CFG_n register */
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_ID_SHFT 0
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_ID_BMSK 0x1
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_IP_SHFT 1
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_IP_BMSK 0x2
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_IP_SHFT 2
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_IP_BMSK 0x4
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_PORT_SHFT 3
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_PORT_BMSK 0x8
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_PORT_SHFT 4
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_PORT_BMSK 0x10
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_PROTOCOL_SHFT 5
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_PROTOCOL_BMSK 0x20
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_METADATA_SHFT 6
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_METADATA_BMSK 0x40
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED1_SHFT 7
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED1_BMSK 0xff80
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_ID_SHFT 16
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_ID_BMSK 0x10000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_IP_SHFT 17
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_IP_BMSK 0x20000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_IP_SHFT 18
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_IP_BMSK 0x40000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_PORT_SHFT 19
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_PORT_BMSK 0x80000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_PORT_SHFT 20
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_PORT_BMSK 0x100000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_PROTOCOL_SHFT 21
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_PROTOCOL_BMSK 0x200000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_METADATA_SHFT 22
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_METADATA_BMSK 0x400000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED2_SHFT 23
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED2_BMSK 0xff800000

/* IPA_RSRC_GRP_XY_RSRC_TYPE_n register */
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_BMSK 0xFF000000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_SHFT 24
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_BMSK 0xFF0000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_SHFT 16
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_BMSK 0xFF00
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_SHFT 8
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_BMSK 0xFF
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_SHFT 0
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_BMSK_V3_5 0x3F000000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_SHFT_V3_5 24
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_BMSK_V3_5 0x3F0000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_SHFT_V3_5 16
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_BMSK_V3_5 0x3F00
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_SHFT_V3_5 8
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_BMSK_V3_5 0x3F
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_SHFT_V3_5 0

/* IPA_RX_HPS_CLIENTS_MIN/MAX_DEPTH_0/1 registers */
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_X_CLIENT_n_BMSK(n) (0x7F << (8 * (n)))
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_X_CLIENT_n_BMSK_V3_5(n) \
						(0xF << (8 * (n)))
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_X_CLIENT_n_SHFT(n) (8 * (n))
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_4_BMSK_v4_5 0xF0000000
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_4_SHFT_v4_5 28
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_3_BMSK_v4_5 0xF000000
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_3_SHFT_v4_5 24
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_2_BMSK_v4_5 0xF0000
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_2_SHFT_v4_5 16
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_1_BMSK_v4_5 0xF00
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_1_SHFT_v4_5 8
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_0_BMSK_v4_5 0xF
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_0_CLIENT_0_SHFT_v4_5 0

/* IPA_QSB_MAX_WRITES register */
#define IPA_QSB_MAX_WRITES_GEN_QMB_0_MAX_WRITES_BMSK (0xf)
#define IPA_QSB_MAX_WRITES_GEN_QMB_0_MAX_WRITES_SHFT (0)
#define IPA_QSB_MAX_WRITES_GEN_QMB_1_MAX_WRITES_BMSK (0xf0)
#define IPA_QSB_MAX_WRITES_GEN_QMB_1_MAX_WRITES_SHFT (4)

/* IPA_QSB_MAX_READS register */
#define IPA_QSB_MAX_READS_GEN_QMB_0_MAX_READS_BMSK (0xf)
#define IPA_QSB_MAX_READS_GEN_QMB_0_MAX_READS_SHFT (0)
#define IPA_QSB_MAX_READS_GEN_QMB_1_MAX_READS_BMSK (0xf0)
#define IPA_QSB_MAX_READS_GEN_QMB_1_MAX_READS_SHFT (4)

/* IPA_QSB_MAX_READS_BEATS register */
#define IPA_QSB_MAX_READS_GEN_QMB_0_MAX_READS_BEATS_BMSK_V4_0 (0xff0000)
#define IPA_QSB_MAX_READS_GEN_QMB_0_MAX_READS_BEATS_SHFT_V4_0 (0x10)
#define IPA_QSB_MAX_READS_GEN_QMB_1_MAX_READS_BEATS_BMSK_V4_0 (0xff000000)
#define IPA_QSB_MAX_READS_GEN_QMB_1_MAX_READS_BEATS_SHFT_V4_0 (0x18)

/* IPA_TX_CFG register */
#define IPA_TX_CFG_TX0_PREFETCH_DISABLE_BMSK_V3_5 (0x1)
#define IPA_TX_CFG_TX0_PREFETCH_DISABLE_SHFT_V3_5 (0)
#define IPA_TX_CFG_TX1_PREFETCH_DISABLE_BMSK_V3_5 (0x2)
#define IPA_TX_CFG_TX1_PREFETCH_DISABLE_SHFT_V3_5 (1)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_BMSK_V3_5 (0x1C)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_SHFT_V3_5 (2)

#define IPA_TX_CFG_SSPND_PA_NO_START_STATE_BMSK_V4_9 (0x40000)
#define IPA_TX_CFG_SSPND_PA_NO_START_STATE_SHFT_V4_9 (0x12)
#define IPA_TX_CFG_DUAL_TX_ENABLE_BMSK_V4_5 (0x20000)
#define IPA_TX_CFG_DUAL_TX_ENABLE_SHFT_V4_5 (0x11)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_TX1_BMSK_V4_0 (0x1e000)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_TX1_SHFT_V4_0 (0xd)
#define IPA_TX_CFG_PA_MASK_EN_BMSK_V4_0 (0x1000)
#define IPA_TX_CFG_PA_MASK_EN_SHFT_V4_0 (0xc)
#define IPA_TX_CFG_DMAW_SCND_OUTSD_PRED_EN_BMSK_V4_0 (0x800)
#define IPA_TX_CFG_DMAW_SCND_OUTSD_PRED_EN_SHFT_V4_0 (0xb)
#define IPA_TX_CFG_DMAW_MAX_BEATS_256_DIS_BMSK_V4_0 (0x400)
#define IPA_TX_CFG_DMAW_MAX_BEATS_256_DIS_SHFT_V4_0 (0xa)
#define IPA_TX_CFG_DMAW_SCND_OUTSD_PRED_THRESHOLD_BMSK_V4_0 (0x3c0)
#define IPA_TX_CFG_DMAW_SCND_OUTSD_PRED_THRESHOLD_SHFT_V4_0 (0x6)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_TX0_BMSK_V4_0 (0x3c)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_TX0_SHFT_V4_0 (0x2)

/* IPA_IDLE_INDICATION_CFG regiser */
#define IPA_IDLE_INDICATION_CFG_ENTER_IDLE_DEBOUNCE_THRESH_BMSK_V3_5 (0xffff)
#define IPA_IDLE_INDICATION_CFG_ENTER_IDLE_DEBOUNCE_THRESH_SHFT_V3_5 (0)
#define IPA_IDLE_INDICATION_CFG_CONST_NON_IDLE_ENABLE_BMSK_V3_5 (0x10000)
#define IPA_IDLE_INDICATION_CFG_CONST_NON_IDLE_ENABLE_SHFT_V3_5 (16)

/* IPA_HPS_FTCH_QUEUE_WEIGHT register */
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_0_BMSK (0xf)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_0_SHFT (0x0)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_1_BMSK (0xf0)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_1_SHFT (0x4)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_2_BMSK (0xf00)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_2_SHFT (0x8)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_3_BMSK (0xf000)
#define IPA_HPS_FTCH_ARB_QUEUE_WEIGHTS_RX_HPS_QUEUE_WEIGHT_3_SHFT (0xc)

/* IPA_COUNTER_CFG register */
#define IPA_COUNTER_CFG_AGGR_GRANULARITY_BMSK (0x1f0)
#define IPA_COUNTER_CFG_AGGR_GRANULARITY_SHFT (0x4)

/* IPA_COMP_CFG register*/
#define IPA_COMP_CFG_IPA_ATOMIC_FETCHER_ARB_LOCK_DIS_BMSK 0x1E0000
#define IPA_COMP_CFG_IPA_ATOMIC_FETCHER_ARB_LOCK_DIS_SHFT 17
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_GLOBAL_EN_BMSK 0x10000
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_GLOBAL_EN_SHFT 16
#define IPA_COMP_CFG_GSI_MULTI_AXI_MASTERS_DIS_BMSK 0x8000
#define IPA_COMP_CFG_GSI_MULTI_AXI_MASTERS_DIS_SHFT 15
#define IPA_COMP_CFG_GSI_SNOC_CNOC_LOOP_PROTECTION_DISABLE_BMSK 0x4000
#define IPA_COMP_CFG_GSI_SNOC_CNOC_LOOP_PROTECTION_DISABLE_SHFT 14
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_CNOC_LOOP_PROTECTION_DISABLE_BMSK 0x2000
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_CNOC_LOOP_PROTECTION_DISABLE_SHFT 13
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_WR_DIS_BMSK 0x1000
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_WR_DIS_SHFT 12
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_WR_DIS_BMSK 0x800
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_WR_DIS_SHFT 11
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_RD_DIS_BMSK 0x400
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_RD_DIS_SHFT 10
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_RD_DIS_BMSK 0x200
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_RD_DIS_SHFT 9
#define IPA_COMP_CFG_GSI_MULTI_INORDER_WR_DIS_BMSK 0x100
#define IPA_COMP_CFG_GSI_MULTI_INORDER_WR_DIS_SHFT 8
#define IPA_COMP_CFG_GSI_MULTI_INORDER_RD_DIS_BMSK 0x80
#define IPA_COMP_CFG_GSI_MULTI_INORDER_RD_DIS_SHFT 7
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_PROD_EN_BMSK 0x40
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_PROD_EN_SHFT 6
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_CONS_EN_BMSK 0x20
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_CONS_EN_SHFT 5
#define IPA_COMP_CFG_IPA_DCMP_FAST_CLK_EN_BMSK 0x10
#define IPA_COMP_CFG_IPA_DCMP_FAST_CLK_EN_SHFT 4
#define IPA_COMP_CFG_GEN_QMB_1_SNOC_BYPASS_DIS_BMSK 0x8
#define IPA_COMP_CFG_GEN_QMB_1_SNOC_BYPASS_DIS_SHFT 3
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_BYPASS_DIS_BMSK 0x4
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_BYPASS_DIS_SHFT 2
#define IPA_COMP_CFG_GSI_SNOC_BYPASS_DIS_BMSK 0x2
#define IPA_COMP_CFG_GSI_SNOC_BYPASS_DIS_SHFT 1
#define IPA_COMP_CFG_ENABLE_BMSK 0x1
#define IPA_COMP_CFG_ENABLE_SHFT 0

#define IPA_COMP_CFG_IPA_FULL_FLUSH_WAIT_RSC_CLOSURE_EN_BMSK_v4_5 0x200000
#define IPA_COMP_CFG_IPA_FULL_FLUSH_WAIT_RSC_CLOSURE_EN_SHFT_v4_5 21
#define IPA_COMP_CFG_IPA_ATOMIC_FETCHER_ARB_LOCK_DIS_BMSK_v4_5 0x1E0000
#define IPA_COMP_CFG_IPA_ATOMIC_FETCHER_ARB_LOCK_DIS_SHFT_v4_5 17
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_GLOBAL_EN_BMSK_v4_5 0x10000
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_GLOBAL_EN_SHFT_v4_5 16
#define IPA_COMP_CFG_GSI_MULTI_AXI_MASTERS_DIS_BMSK_v4_5 0x8000
#define IPA_COMP_CFG_GSI_MULTI_AXI_MASTERS_DIS_SHFT_v4_5 15
#define IPA_COMP_CFG_GSI_SNOC_CNOC_LOOP_PROTECTION_DISABLE_BMSK_v4_5 0x4000
#define IPA_COMP_CFG_GSI_SNOC_CNOC_LOOP_PROTECTION_DISABLE_SHFT_v4_5 14
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_CNOC_LOOP_PROTECTION_DISABLE_BMSK_v4_5 \
									0x2000
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_CNOC_LOOP_PROTECTION_DISABLE_SHFT_v4_5 13
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_WR_DIS_BMSK_v4_5 0x1000
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_WR_DIS_SHFT_v4_5 12
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_WR_DIS_BMSK_v4_5 0x800
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_WR_DIS_SHFT_v4_5 11
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_RD_DIS_BMSK_v4_5 0x400
#define IPA_COMP_CFG_GEN_QMB_1_MULTI_INORDER_RD_DIS_SHFT_v4_5 10
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_RD_DIS_BMSK_v4_5 0x200
#define IPA_COMP_CFG_GEN_QMB_0_MULTI_INORDER_RD_DIS_SHFT_v4_5 9
#define IPA_COMP_CFG_GSI_MULTI_INORDER_WR_DIS_BMSK_v4_5 0x100
#define IPA_COMP_CFG_GSI_MULTI_INORDER_WR_DIS_SHFT_v4_5 8
#define IPA_COMP_CFG_GSI_MULTI_INORDER_RD_DIS_BMSK_v4_5 0x80
#define IPA_COMP_CFG_GSI_MULTI_INORDER_RD_DIS_SHFT_v4_5 7
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_PROD_EN_BMSK_v4_5 0x40
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_PROD_EN_SHFT_v4_5 6
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_CONS_EN_BMSK_v4_5 0x20
#define IPA_COMP_CFG_IPA_QMB_SELECT_BY_ADDRESS_CONS_EN_SHFT_v4_5 5
#define IPA_COMP_CFG_GEN_QMB_1_SNOC_BYPASS_DIS_BMSK_v4_5 0x8
#define IPA_COMP_CFG_GEN_QMB_1_SNOC_BYPASS_DIS_SHFT_v4_5 3
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_BYPASS_DIS_BMSK_v4_5 0x4
#define IPA_COMP_CFG_GEN_QMB_0_SNOC_BYPASS_DIS_SHFT_v4_5 2
#define IPA_COMP_CFG_GSI_SNOC_BYPASS_DIS_BMSK_v4_5 0x2
#define IPA_COMP_CFG_GSI_SNOC_BYPASS_DIS_SHFT_v4_5 1


/*IPA 4.9*/
#define IPA_COMP_CFG_GEN_QMB_0_DYNAMIC_ASIZE_BMSK_v4_9 0x80000000
#define IPA_COMP_CFG_GEN_QMB_0_DYNAMIC_ASIZE_SHFT_v4_9 31
#define IPA_COMP_CFG_GEN_QMB_1_DYNAMIC_ASIZE_BMSK_v4_9 0x40000000
#define IPA_COMP_CFG_GEN_QMB_1_DYNAMIC_ASIZE_SHFT_v4_9 30
#define IPA_COMP_CFG_IPA_ATOMIC_FETCHER_ARB_LOCK_DIS_BMSK_v4_9 0x1C00000
#define IPA_COMP_CFG_IPA_ATOMIC_FETCHER_ARB_LOCK_DIS_SHFT_v4_9 22
#define IPA_COMP_CFG_GSI_IF_OUT_OF_BUF_STOP_RESET_MASK_ENABLE_BMSK_v4_9 0x200000
#define IPA_COMP_CFG_GSI_IF_OUT_OF_BUF_STOP_RESET_MASK_ENABLE_SHFT_v4_9 21
#define IPA_COMP_CFG_GENQMB_AOOOWR_BMSK_v4_9 0x100000
#define IPA_COMP_CFG_GENQMB_AOOOWR_SHFT_v4_9 20
#define IPA_COMP_CFG_QMB_RAM_RD_CACHE_DISABLE_BMSK_v4_9 0x80000
#define IPA_COMP_CFG_QMB_RAM_RD_CACHE_DISABLE_SHFT_v4_9 19
#define IPA_COMP_CFG_IPA_FULL_FLUSH_WAIT_RSC_CLOSURE_EN_BMSK_v4_9 0x20000
#define IPA_COMP_CFG_IPA_FULL_FLUSH_WAIT_RSC_CLOSURE_EN_SHFT_v4_9 17
#define IPA_COMP_CFG_RAM_ARB_PRIORITY_CLIENT_SAMP_FIX_DISABLE_BMSK_v4_9 0x1
#define IPA_COMP_CFG_RAM_ARB_PRIORITY_CLIENT_SAMP_FIX_DISABLE_SHFT_v4_9 0

/* IPA_COAL registers*/
#define IPA_STATE_COAL_MASTER_VP_TIMER_EXPIRED_BMSK 0xF0000000
#define IPA_STATE_COAL_MASTER_VP_TIMER_EXPIRED_SHFT 28
#define IPA_STATE_COAL_MASTER_LRU_VP_BMSK 0xF000000
#define IPA_STATE_COAL_MASTER_LRU_VP_SHFT 24
#define IPA_STATE_COAL_MASTER_INIT_VP_FSM_STATE_BMSK 0xF00000
#define IPA_STATE_COAL_MASTER_INIT_VP_FSM_STATE_SHFT 20
#define IPA_STATE_COAL_MASTER_CHECK_FIR_FSM_STATE_BMSK 0xF0000
#define IPA_STATE_COAL_MASTER_CHECK_FIR_FSM_STATE_SHFT 16
#define IPA_STATE_COAL_MASTER_HASH_CALC_FSM_STATE_BMSK 0xF000
#define IPA_STATE_COAL_MASTER_HASH_CALC_FSM_STATE_SHFT 12
#define IPA_STATE_COAL_MASTER_FIND_OPEN_FSM_STATE_BMSK 0xF00
#define IPA_STATE_COAL_MASTER_FIND_OPEN_FSM_STATE_SHFT 8
#define IPA_STATE_COAL_MASTER_MAIN_FSM_STATE_BMSK 0xF0
#define IPA_STATE_COAL_MASTER_MAIN_FSM_STATE_SHFT 4
#define IPA_STATE_COAL_MASTER_VP_VLD_BMSK 0xF0
#define IPA_STATE_COAL_MASTER_VP_VLD_SHFT 0
#define IPA_COAL_VP_LRU_THRSHLD_BMSK 0x3E
#define IPA_COAL_VP_LRU_THRSHLD_SHFT 1
#define IPA_COAL_EVICTION_EN_BMSK 0x1
#define IPA_COAL_EVICTION_EN_SHFT 0
#define IPA_COAL_QMAP_CFG_BMSK 0x1
#define IPA_COAL_QMAP_CFG_SHFT 0

#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_OPEN_FRAME_BMSK 0xf0000000
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_OPEN_FRAME_SHFT 0x1f
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_CTX_IDLE_BMSK 0x100000
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_CTX_IDLE_SHFT 0x10
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_IDLE_BMSK 0x8000
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_IDLE_SHFT 0xf
#define IPA_STATE_TX_WRAPPER_COAL_DIRECT_DMA_BMSK 0x6000
#define IPA_STATE_TX_WRAPPER_COAL_DIRECT_DMA_SHFT 0xd
#define IPA_STATE_TX_WRAPPER_NLO_DIRECT_DMA_BMSK 0x1800
#define IPA_STATE_TX_WRAPPER_NLO_DIRECT_DMA_SHFT 0xb
#define IPA_STATE_TX_WRAPPER_PKT_DROP_CNT_IDLE_BMSK 0x400
#define IPA_STATE_TX_WRAPPER_PKT_DROP_CNT_IDLE_SHFT 0xa
#define IPA_STATE_TX_WRAPPER_TRNSEQ_FORCE_VALID_BMSK 0x200
#define IPA_STATE_TX_WRAPPER_TRNSEQ_FORCE_VALID_SHFT 0x9
#define IPA_STATE_TX_WRAPPER_MBIM_DIRECT_DMA_BMSK 0x180
#define IPA_STATE_TX_WRAPPER_MBIM_DIRECT_DMA_SHFT 0x7
#define IPA_STATE_TX_WRAPPER_IPA_MBIM_PKT_FMS_IDLE_BMSK 0x40
#define IPA_STATE_TX_WRAPPER_IPA_MBIM_PKT_FMS_IDLE_SHFT 0x6
#define IPA_STATE_TX_WRAPPER_IPA_PROD_BRESP_TOGGLE_IDLE_BMSK 0x20
#define IPA_STATE_TX_WRAPPER_IPA_PROD_BRESP_TOGGLE_IDLE_SHFT 0x5
#define IPA_STATE_TX_WRAPPER_IPA_PROD_BRESP_EMPTY_BMSK 0x10
#define IPA_STATE_TX_WRAPPER_IPA_PROD_BRESP_EMPTY_SHFT 0x4
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_STATE_IDLE_BMSK 0x8
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_STATE_IDLE_SHFT 0x3
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_DB_EMPTY_BMSK 0x4
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_DB_EMPTY_SHFT 0x2
#define IPA_STATE_TX_WRAPPER_TX1_IDLE_BMSK 0x2
#define IPA_STATE_TX_WRAPPER_TX1_IDLE_SHFT 0x1
#define IPA_STATE_TX_WRAPPER_TX0_IDLE_BMSK 0x1
#define IPA_STATE_TX_WRAPPER_TX0_IDLE_SHFT 0x0

#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_OPEN_FRAME_BMSK_v4_7 0xf0000000
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_OPEN_FRAME_SHFT_v4_7 28
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_CTX_IDLE_BMSK_v4_7 0x80000
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_CTX_IDLE_SHFT_v4_7 19
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_IDLE_BMSK_v4_7 0x40000
#define IPA_STATE_TX_WRAPPER_COAL_SLAVE_IDLE_SHFT_v4_7 18
#define IPA_STATE_TX_WRAPPER_IPA_PROD_BRESP_EMPTY_BMSK_v4_7 0x10
#define IPA_STATE_TX_WRAPPER_IPA_PROD_BRESP_EMPTY_SHFT_v4_7 4
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_STATE_IDLE_BMSK_v4_7 0x8
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_STATE_IDLE_SHFT_v4_7 3
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_DB_EMPTY_BMSK_v4_7 0x4
#define IPA_STATE_TX_WRAPPER_IPA_PROD_ACKMNGR_DB_EMPTY_SHFT_v4_7 2
#define IPA_STATE_TX_WRAPPER_TX1_IDLE_BMSK_v4_7 0x2
#define IPA_STATE_TX_WRAPPER_TX1_IDLE_SHFT_v4_7 1
#define IPA_STATE_TX_WRAPPER_TX0_IDLE_BMSK_v4_7 0x1
#define IPA_STATE_TX_WRAPPER_TX0_IDLE_SHFT_v4_7 0

#endif /* _IPAHAL_REG_I_H_ */

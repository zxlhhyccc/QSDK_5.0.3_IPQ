// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _UNPAUSE_QID_CMD_H_
#define _UNPAUSE_QID_CMD_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	cmd_id[3:0], reserved_0a[7:4], sw_cmd_ref[15:8], qid[29:16], reserved_0b[31:30]
//	1	reserved_1[31:0]
//	2	reserved_2[31:0]
//	3	reserved_3[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_UNPAUSE_QID_CMD 4

struct unpause_qid_cmd {
    volatile uint32_t cmd_id                          :  4, //[3:0]
                      reserved_0a                     :  4, //[7:4]
                      sw_cmd_ref                      :  8, //[15:8]
                      qid                             : 14, //[29:16]
                      reserved_0b                     :  2; //[31:30]
    volatile uint32_t reserved_1                      : 32; //[31:0]
    volatile uint32_t reserved_2                      : 32; //[31:0]
    volatile uint32_t reserved_3                      : 32; //[31:0]
};

/*

cmd_id
			
			Command ID:
			
			Set to 0x4 (which indicates UnPause QID cmd) <legal 4>

reserved_0a
			
			FW will set to 0, MAC will ignore.  <legal 0>

sw_cmd_ref
			
			SW command reference. A field only used by SW and
			ignored by QM. This field can aid SW to map this command to
			its originator and is used for tracking/debugging purposes. 
			<legal all>

qid
			
			Queue ID:  The Index of the MPDU transmit queue for
			which all HW accesses and updates are enabled again.
			
			Note: Receiving an UnPause request for a QID that was
			never paused generates a warning interrupt. The command will
			be ignored. <legal all>

reserved_0b
			
			FW will set to 0, MAC will ignore.  <legal 0>

reserved_1
			
			FW will set to 0, MAC will ignore.  <legal 0>

reserved_2
			
			FW will set to 0, MAC will ignore.  <legal 0>

reserved_3
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/


/* Description		UNPAUSE_QID_CMD_0_CMD_ID
			
			Command ID:
			
			Set to 0x4 (which indicates UnPause QID cmd) <legal 4>
*/
#define UNPAUSE_QID_CMD_0_CMD_ID_OFFSET                              0x00000000
#define UNPAUSE_QID_CMD_0_CMD_ID_LSB                                 0
#define UNPAUSE_QID_CMD_0_CMD_ID_MASK                                0x0000000f

/* Description		UNPAUSE_QID_CMD_0_RESERVED_0A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define UNPAUSE_QID_CMD_0_RESERVED_0A_OFFSET                         0x00000000
#define UNPAUSE_QID_CMD_0_RESERVED_0A_LSB                            4
#define UNPAUSE_QID_CMD_0_RESERVED_0A_MASK                           0x000000f0

/* Description		UNPAUSE_QID_CMD_0_SW_CMD_REF
			
			SW command reference. A field only used by SW and
			ignored by QM. This field can aid SW to map this command to
			its originator and is used for tracking/debugging purposes. 
			<legal all>
*/
#define UNPAUSE_QID_CMD_0_SW_CMD_REF_OFFSET                          0x00000000
#define UNPAUSE_QID_CMD_0_SW_CMD_REF_LSB                             8
#define UNPAUSE_QID_CMD_0_SW_CMD_REF_MASK                            0x0000ff00

/* Description		UNPAUSE_QID_CMD_0_QID
			
			Queue ID:  The Index of the MPDU transmit queue for
			which all HW accesses and updates are enabled again.
			
			Note: Receiving an UnPause request for a QID that was
			never paused generates a warning interrupt. The command will
			be ignored. <legal all>
*/
#define UNPAUSE_QID_CMD_0_QID_OFFSET                                 0x00000000
#define UNPAUSE_QID_CMD_0_QID_LSB                                    16
#define UNPAUSE_QID_CMD_0_QID_MASK                                   0x3fff0000

/* Description		UNPAUSE_QID_CMD_0_RESERVED_0B
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define UNPAUSE_QID_CMD_0_RESERVED_0B_OFFSET                         0x00000000
#define UNPAUSE_QID_CMD_0_RESERVED_0B_LSB                            30
#define UNPAUSE_QID_CMD_0_RESERVED_0B_MASK                           0xc0000000

/* Description		UNPAUSE_QID_CMD_1_RESERVED_1
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define UNPAUSE_QID_CMD_1_RESERVED_1_OFFSET                          0x00000004
#define UNPAUSE_QID_CMD_1_RESERVED_1_LSB                             0
#define UNPAUSE_QID_CMD_1_RESERVED_1_MASK                            0xffffffff

/* Description		UNPAUSE_QID_CMD_2_RESERVED_2
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define UNPAUSE_QID_CMD_2_RESERVED_2_OFFSET                          0x00000008
#define UNPAUSE_QID_CMD_2_RESERVED_2_LSB                             0
#define UNPAUSE_QID_CMD_2_RESERVED_2_MASK                            0xffffffff

/* Description		UNPAUSE_QID_CMD_3_RESERVED_3
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define UNPAUSE_QID_CMD_3_RESERVED_3_OFFSET                          0x0000000c
#define UNPAUSE_QID_CMD_3_RESERVED_3_LSB                             0
#define UNPAUSE_QID_CMD_3_RESERVED_3_MASK                            0xffffffff


#endif // _UNPAUSE_QID_CMD_H_

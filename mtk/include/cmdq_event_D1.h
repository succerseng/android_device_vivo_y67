/* MDP start frame */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA0_SOF, 0)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ0_SOF, 1)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ1_SOF, 2)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DSI_TE, 3)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WDMA_SOF, 4)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT_SOF, 5)

/* Display start frame */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL0_SOF, 6)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_SOF, 7)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA1_SOF, 8)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA0_SOF, 9)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_CCORR_SOF, 10)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR_SOF, 11)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_AAL_SOF, 12)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_GAMMA_SOF, 13)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_DITHER_SOF, 14)

DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_PWM0_SOF, 16)

DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL1_SOF, (-2))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_UFOE_SOF, (-3))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA1_SOF, (-4))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L0_SOF, (-5))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L1_SOF, (-6))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L2_SOF, (-7))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L3_SOF, (-8))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L0_SOF, (-9))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L1_SOF, (-10))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L2_SOF, (-11))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L3_SOF, (-12))


/* MDP frame done */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RDMA0_EOF, 17)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ0_EOF, 18)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_RSZ1_EOF, 19)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP_EOF, 20)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WDMA_EOF, 21)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT_WRITE_EOF, 22)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_WROT_READ_EOF, 23)

/* Display frame done */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL0_EOF, 24)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_EOF, 25)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA1_EOF, 26)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA0_EOF, 27)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_CCORR_EOF, 28)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_COLOR_EOF, 29)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_AAL_EOF, 30)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_GAMMA_EOF, 31)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_DITHER_EOF, 32)

DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_DPI0_EOF, 34)

DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_OVL1_EOF, (-13))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_UFOE_EOF, (-14))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_WDMA1_EOF, (-15))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L0_EOF, (-16))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L1_EOF, (-17))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L2_EOF, (-18))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA0_L3_EOF, (-19))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L0_EOF, (-20))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L1_EOF, (-21))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L2_EOF, (-22))
DECLARE_CMDQ_EVENT(CMDQ_EVENT_UFOD_RAMA1_L3_EOF, (-23))

/* Mutex frame done */
/* DISPSYS */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX0_STREAM_EOF, 35)
/* DISPSYS */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX1_STREAM_EOF, 36)
/* DISPSYS */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX2_STREAM_EOF, 37)
/* DISPSYS */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX3_STREAM_EOF, 38)
/* DISPSYS, please refer to disp_hal.h */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX4_STREAM_EOF, 39)
/* DpFramework */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX5_STREAM_EOF, 40)
/* DpFramework */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX6_STREAM_EOF, 41)
/* DpFramework */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX7_STREAM_EOF, 42)
/* DpFramework */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX8_STREAM_EOF, 43)
/* DpFramework via CMDQ_IOCTL_LOCK_MUTEX */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MUTEX9_STREAM_EOF, 44)

/* Display underrun */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA0_UNDERRUN, 45)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_DISP_RDMA1_UNDERRUN, 46)

/* Display TE */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_MDP_TDSHP_SOF, 47)

/* ISP frame done */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS2_2_EOF, 65)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS2_1_EOF, 66)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS2_0_EOF, 67)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS1_1_EOF, 68)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_PASS1_0_EOF, 69)

/* ISP engine events */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_CAMSV_2_PASS1_DONE, 70)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_CAMSV_1_PASS1_DONE, 71)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_SENINF_CAM1_2_3_FULL, 72)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_ISP_SENINF_CAM0_FULL, 73)

/* VENC frame done */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_VENC_EOF, 129)

/* JPEG frame done */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_JPEG_ENC_EOF, 130)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_JPEG_DEC_EOF, 131)

/* VENC engine events */
DECLARE_CMDQ_EVENT(CMDQ_EVENT_VENC_MB_DONE, 132)
DECLARE_CMDQ_EVENT(CMDQ_EVENT_VENC_128BYTE_CNT_DONE, 133)

/* Keep this at the end of HW events */
DECLARE_CMDQ_EVENT(CMDQ_MAX_HW_EVENT_COUNT, 400)

/* SW Sync Tokens (Pre-defined) */
/* Config thread notify trigger thread */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_CONFIG_DIRTY, 401)
/* Trigger thread notify config thread */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_STREAM_EOF, 402)
/* Block Trigger thread until the ESD check finishes. */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_ESD_EOF, 403)
/* check CABC setup finish */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_CABC_EOF, 404)
/* Block Trigger thread until the path freeze finishes */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_FREEZE_EOF, 405)
/* Pass-2 notifies VENC frame is ready to be encoded */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_VENC_INPUT_READY, 406)
/* VENC notifies Pass-2 encode done so next frame may start */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_VENC_EOF, 407)

/* Notify normal CMDQ there are some secure task done */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_SECURE_THR_EOF, 408)

/* SW Sync Tokens (User-defined) */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_USER_0, 410)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_USER_1, 411)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_POLL_MONITOR, 412)

/* Event for CMDQ to block executing command when append command
* Plz sync CMDQ_SYNC_TOKEN_APPEND_THR(id) in cmdq_core source file. */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR0, 422)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR1, 423)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR2, 424)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR3, 425)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR4, 426)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR5, 427)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR6, 428)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR7, 429)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR8, 430)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR9, 431)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR10, 432)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR11, 433)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR12, 434)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR13, 435)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR14, 436)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_APPEND_THR15, 437)

/* GPR access tokens (for HW register backup) */
/* There are 15 32-bit GPR, 3 GPR form a set (64-bit for address, 32-bit for value) */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_0, 450)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_1, 451)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_2, 452)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_3, 453)
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_GPR_SET_4, 454)

/* Resource lock event to control resource in GCE thread */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_RESOURCE_WROT0, 460)

/* event id is 9 bit */
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_MAX, (0x1FF))
DECLARE_CMDQ_EVENT(CMDQ_SYNC_TOKEN_INVALID, (-1))

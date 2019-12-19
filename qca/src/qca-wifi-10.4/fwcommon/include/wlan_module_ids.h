/*
 * Copyright (c) 2011 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 * $ATH_LICENSE_TARGET_C$
 */

#ifndef _WLAN_MODULE_IDS_H_
#define _WLAN_MODULE_IDS_H_

/* Wlan module ids , global across all the modules (auto generated using parse_dbglog_id.py) */
typedef enum {
    WLAN_MODULE_ID_MIN = 0,
    WLAN_MODULE_INF = WLAN_MODULE_ID_MIN,
    WAL_MODULE_DE,
    WLAN_MODULE_WAL_PDEV,
    WLAN_MODULE_WAL_VDEV,
    WLAN_MODULE_ROAM,
    WLAN_MODULE_DATA_TXRX,
    WLAN_MODULE_BLOCKACK,
    WLAN_MODULE_QBOOST,
    WLAN_MODULE_CACHEMGR,
    WLAN_MODULE_HOST,
    WLAN_MODULE_WMI,
    WLAN_MODULE_STA_PWRSAVE,
    WLAN_MODULE_RESMGR_OCS,
    WLAN_MODULE_RESMGR_CHAN_MANAGER,
    WLAN_MODULE_VDEV_MGR,
    WLAN_MODULE_WHAL,
    WLAN_MODULE_COEX,
    WLAN_MODULE_SCAN,
    WLAN_MODULE_BEACON,
    WLAN_MODULE_RATECTRL,
    WLAN_MODULE_AP_PWRSAVE,
    WLAN_MODULE_MGMT_TXRX,
    WLAN_MODULE_WAL,
    WLAN_MODULE_ANI,
    WLAN_MODULE_OFFLOAD,
    WLAN_MODULE_RESOURCE,
    WLAN_MODULE_DCS,
    WLAN_MODULE_P2P,
    WLAN_MODULE_CSA,
    WLAN_MODULE_CHATTER,
    WLAN_MODULE_WOW,
    WLAN_MODULE_RTT,
    WLAN_MODULE_HOSTQ,
    WLAN_MODULE_PFSCHED,
    WLAN_MODULE_DEBUG,
    WLAN_MODULE_AP_CABQ_MCAST,
    /* add new modules IDs here */

    WLAN_MODULE_ID_MAX,
    WLAN_MODULE_ID_INVALID = WLAN_MODULE_ID_MAX,
} WLAN_MODULE_ID;

#endif /* _WLAN_MODULE_IDS_H_ */

#pragma once
#include <inttypes.h>

namespace ixblue_stdbin_decoder
{
namespace Data
{
// TODO : For all status data, we will need to allow user to query a textual
// representation of a status.
struct INSSystemStatus
{
    enum Status1
    {
        SERIAL_IN_R_ERR = 0,
        INPUT_A_ERR = 1,
        INPUT_B_ERR = 2,
        INPUT_C_ERR = 3,
        INPUT_D_ERR = 4,
        INPUT_E_ERR = 5,
        INPUT_F_ERR = 6,
        INPUT_G_ERR = 7,
        INPUT_R_ACTIVITY = 8,
        INPUT_A_ACTIVITY = 9,
        INPUT_B_ACTIVITY = 10,
        INPUT_C_ACTIVITY = 11,
        INPUT_D_ACTIVITY = 12,
        INPUT_E_ACTIVITY = 13,
        INPUT_F_ACTIVITY = 14,
        INPUT_G_ACTIVITY = 15,
        OUTPUT_R_FULL = 16,
        OUTPUT_A_FULL = 17,
        OUTPUT_B_FULL = 18,
        OUTPUT_C_FULL = 19,
        OUTPUT_D_FULL = 20,
        OUTPUT_E_FULL = 21,
        ETHERNET_PORT_FULL = 22,
        // 23 reserved
        INTERNAL_TIME_USED = 24,
        // 25 reserved
        ETHERNET_PORT_ACTIVITY = 26,
        PULSE_IN_A_ACTIVITY = 27,
        PULSE_IN_B_ACTIVITY = 28,
        PULSE_IN_C_ACTIVITY = 29,
        PULSE_IN_D_ACTIVITY = 30
        // 31 reserved
    };

    enum Status2
    {
        DVL_BT_DETECTED = 0,
        DVL_WT_DETECTED = 1,
        GPS_DETECTED = 2,
        GPS2_DETECTED = 3,
        USBL_DETECTED = 4,
        LBL_DETECTED = 5,
        DEPTH_DETECTED = 6,
        EMLOG_DETECTED = 7,
        // 8 reserved
        UTC_DETECTED = 9,
        ALTITUDE_DETECTED = 10,
        PPS_DETECTED = 11,
        ZUPT_MODE_ACTIVATED = 12,
        // 13 reserved
        MANUAL_GPS_DETECTED = 14,
        CTD_DETECTED = 15,
        SIMULATION_MODE = 16,
        // 17 reserved
        DSP_INCOMPATIBILITY = 18,
        HEADING_ALERT = 19,
        POSITION_ALERT = 20,
        WAIT_FOR_POSITION = 21,
        // 22 reserved
        POLAR_MODE = 23,
        INTERNAL_LOG = 24,
        // 25 reserved
        DOV_CORR_DETECTED = 26,
        MPC_OVERLOAD = 27,
        POWER_SUPPLY_FAILURE = 28,
        // 29 reserved
        CONFIGURATION_SAVED = 30,
        // 31 reserved
    };

    enum Status3
    {
        UTC2_DETECTED = 0,
        PPS2_DETECTED = 1,
        ADVANCED_FILTERING = 2,
        NTP_SYNC_IN_PROGRESS = 3,
        NTP_SYNCHRO = 5,
        NTP_FAILED = 6,
        // 7 reserved
        DVL2_BT_DETECTED = 8,
        DVL2_WT_DETECTED = 9,
        // 10 - 17 reserved
        SYSTEM_READY = 18,
        // 19 - 25 reserved
        SYSTEM_FULL_PERF = 26,
        USBL2_DETECTED = 28,
        USBL3_DETECTED = 29
        // 30-31 reserved
    };

    uint32_t status1 = 0;
    uint32_t status2 = 0;
    uint32_t status3 = 0;
};

} // namespace Data
} // namespace ixblue_stdbin_decoder

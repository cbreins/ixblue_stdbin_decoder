#pragma once
#include <inttypes.h>

namespace ixblue_stdbin_decoder
{
namespace Data
{

struct INSUserStatus
{
    enum Status : uint32_t
    {
        DVL_RECEIVED_VALID = 0,
        GPS_RECEIVED_VALID = 1,
        DEPTH_RECEIVED_VALID = 2,
        USBL_RECEIVED_VALID = 3,
        LBL_RECEIVED_VALID = 4,
        GPS2_RECEIVED_VALID = 5,
        EMLOG_RECEIVED_VALID = 6,
        MANUAL_GPS_RECEIVED_VALID = 7,
        TIME_RECEIVED_VALID = 8,
        FOG_ANOMALY = 9,
        ACC_ANOMALY = 10,
        TEMPERATURE_ERR = 11,
        CPU_OVERLOAD = 12,
        DYNAMIC_EXCEDEED = 13,
        SPEED_SATURATION = 14,
        ALTITUDE_SATURATION = 15,
        INPUT_A_ERR = 16,
        INPUT_B_ERR = 17,
        INPUT_C_ERR = 18,
        INPUT_D_ERR = 19,
        INPUT_E_ERR = 20,
        OUTPUT_A_ERR = 21,
        OUTPUT_B_ERR = 22,
        OUTPUT_C_ERR = 23,
        OUTPUT_D_ERR = 24,
        OUTPUT_E_ERR = 25,
        HRP_INVALID = 26,
        ALIGNEMENT = 27,
        FINE_ALIGNMENT = 28,
        NAVIGATION = 29,
        DEGRADED_MODE = 30,
        FAILURE_MODE = 31
    };
    uint32_t status = 0;
};
} // namespace Data
} // namespace ixblue_stdbin_decoder
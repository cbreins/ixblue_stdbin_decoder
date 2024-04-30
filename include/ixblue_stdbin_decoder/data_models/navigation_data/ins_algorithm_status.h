#pragma once
#include <inttypes.h>

namespace ixblue_stdbin_decoder
{
namespace Data
{

struct INSAlgorithmStatus
{
    enum Status1
    {
        NAVIGATION = 0,
        ALIGNMENT = 1,
        FINE_ALIGNMENT = 2,
        DEAD_RECKONING = 3,
        GPS_ALTITUDE = 4,
        DEPTHSENSOR_ALTITUDE = 5,
        ZERO_ALTITUDE = 6,
        HYDRO_ALTITUDE = 7,
        LOG_RECEIVED = 8,
        LOG_VALID = 9,
        LOG_WAITING = 10,
        LOG_REJECTED = 11,
        GPS_RECEIVED = 12,
        GPS_VALID = 13,
        GPS_WAITING = 14,
        GPS_REJECTED = 15,
        USBL_RECEIVED = 16,
        USBL_VALID = 17,
        USBL_WAITING = 18,
        USBL_REJECTED = 19,
        DEPTH_RECEIVED = 20,
        DEPTH_VALID = 21,
        DEPTH_WAITING = 22,
        DEPTH_REJECTED = 23,
        LBL_RECEIVED = 24,
        LBL_VALID = 25,
        LBL_WAITING = 26,
        LBL_REJECTED = 27,
        ALTITUDE_SATURATION = 28,
        SPEED_SATURATION = 29,
        INTERPOLATION_MISSED = 30,
        HEAVE_INITIALISATION = 31
    };

    enum Status2
    {
        WATERTRACK_RECEIVED = 0,
        WATERTRACK_VALID = 1,
        WATERTRACK_WAITING = 2,
        WATERTRACK_REJECTED = 3,
        GPS2_RECEIVED = 4,
        GPS2_VALID = 5,
        GPS2_WAITING = 6,
        GPS2_REJECTED = 7,
        // 8-11 reserved
        ALTITUDE_RECEIVED = 12,
        ALTITUDE_VALID = 13,
        ALTITUDE_WAITING = 14,
        ALTITUDE_REJECTED = 15,
        ZUPT_MODE_ACTIVATED = 16,
        ZUPT_MODE_VALID = 17,
        RO_ZUPT_MODE = 18,
        RO_ZUPT_VALID = 19,
        // 20-22 reserved
        EMULATION_MODE = 23,
        EMLOG_RECEIVED = 24,
        EMLOG_VALID = 25,
        EMLOG_WAITING = 26,
        EMLOG_REJECTED = 27,
        MANUALGPS_RECEIVED = 28,
        MANUALGPS_VALID = 29,
        MANUALGPS_WAITING = 30,
        MANUALGPS_REJECTED = 31
    };

    enum Status3
    {
        // 0 - 7 reserved
        USBL2_RECEIVED = 8,
        USBL2_VALID = 9,
        USBL2_WAITING = 10,
        USBL2_REJECTED = 11,
        USBL3_RECEIVED = 12,
        USBL3_VALID = 13,
        USBL3_WAITING = 14,
        USBL3_REJECTED = 15,
        // 16 reserved
        CALCHK = 17,
        // 18 reserved
        REL_SPD_ZUPT_ACTIVATED = 19,
        REL_SPD_ZUPT_VALID = 20,
        EXT_SENSOR_OUTDATED = 21,
        SENSOR_USED_BEFORE_CALIB = 22,
        // 23-27 reserved
        FIRM_INCOMPATIBLES = 28,
        // 29 reserved
        OPTIMAL_ALIGNMENT = 30,
        // 31 reserved
    };

    enum Status4
    {
        LOG2_RECEIVED = 0,
        LOG2_VALID = 1,
        LOG2_WAITING = 2,
        LOG2_REJECTED = 3,
        WATERTRACK2_RECEIVED = 4,
        WATERTRACK2_VALID = 5,
        WATERTRACK2_WAITING = 6,
        WATERTRACK2_REJECTED = 7,
        DVL_DIST_TRAVELLED_VALID = 8,
        DVL_CALIBRATION_NONE = 9,
        DVL_ROUGH_CALIBRATION = 10,
        DVL_FINE_CALIBRATION = 11,
        DVL_CHECK_CALIBRATION = 12,
        // 13 - 27 reserved
        CINT_FLASH_MEMORY_WRERR = 28,
        CINT_FLASH_MEMORY_ERERR = 29,
        CALIBRATION_COMPLETED = 30,
        INCONSISTENT_SENSOR_DATA = 31
    };

    enum Status5
    {
        // 0-19 reserved
        TR_ZUPT_ACTIVATED = 20,
        TR_ZUPT_VALID = 21,
        PO_ZUPT_ACTIVATED = 22,
        PO_ZUPT_VALID = 23,
        // 24-25 reserved
        CDSP_FLASH_MEMORY_WRERR = 26,
        CDSP_FLASH_MEMORY_ERERR = 27,
        CINT_FLASH_MEMORY_VIRGIN = 28,
        CDSP_FLASH_MEMORY_ERROR = 29,
        CINT_FLASH_MEMORY_BACKUP = 30,
        // 31 reserved
    };

    enum Status6
    {
        // 0-31 reserved
    };

    uint32_t status1 = 0;
    uint32_t status2 = 0;
    uint32_t status3 = 0;
    uint32_t status4 = 0;
    uint32_t status5 = 0;
    uint32_t status6 = 0;
};

} // namespace Data
} // namespace ixblue_stdbin_decoder

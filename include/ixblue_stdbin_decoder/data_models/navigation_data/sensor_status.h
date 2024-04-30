#pragma once
#include <inttypes.h>

namespace ixblue_stdbin_decoder
{
namespace Data
{

struct SensorStatus
{
    enum Status1 : uint32_t
    {
        DATA_READY_ERR = 0,
        SOURCE_POWER_CONTROL_ERR = 1,
        SOURCE_DIODE_ERR = 2,
        SOURCE_MODE_ERR = 3,
        ACC_X_SATURATION_ERR = 4,
        ACC_Y_SATURATION_ERR = 5,
        ACC_Z_SATURATION_ERR = 6,
        ACC_X_ACQ_ERR = 7,
        ACC_Y_ACQ_ERR = 8,
        ACC_Z_ACQ_ERR = 9,
        FOG_X_SATURATION_ERR = 10,
        FOG_Y_SATURATION_ERR = 11,
        FOG_Z_SATURATION_ERR = 12,
        FOG_X_VPI_ERR = 13,
        FOG_Y_VPI_ERR = 14,
        FOG_Z_VPI_ERR = 15,
        // 16-18 reserved
        FOG_X_ACQ_ERR = 19,
        FOG_Y_ACQ_ERR = 20,
        FOG_Z_ACQ_ERR = 21,
        FOG_X_CRC_ERR = 22,
        FOG_Y_CRC_ERR = 23,
        FOG_Z_CRC_ERR = 24,
        TEMP_ACQ_ERR = 25,
        TEMP_THRESHOLD_ERR = 26,
        DTEMP_THRESHOLD_ERR = 27,
        SENSOR_DATA_FIFO_WARNING = 28,
        SENSOR_DATA_FIFO_ERR = 29,
        SOURCE_POWER_ERR = 30,
        SOURCE_RECEPTION_ERR = 31
    };

    enum Status2 : uint32_t
    {
        FOG_X_ERR = 0,
        FOG_Y_ERR = 1,
        FOG_Z_ERR = 2,
        SOURCE_ERR = 3,
        ACC_X_ERR = 4,
        ACC_Y_ERR = 5,
        ACC_Z_ERR = 6,
        TEMP_ERR = 7,
        DSP_OVERLOAD = 8,
        ERR_INIT_CAN_ACC_X = 9,
        ERR_INIT_CAN_ACC_Y = 10,
        ERR_INIT_CAN_ACC_Z = 11,
        MODELISATION_ERROR = 12,
        CONFIGURATION_ERROR = 13,
        SB_DETECTION_ERROR = 14,
        // 15-27 reserved
        IMU_SATURATION = 28,
        BAD_IMU_MODEL = 29,
        DEGRADED_MODE = 30,
        // 31 reserved
    };

    uint32_t status1 = 0;
    uint32_t status2 = 0;
};
} // namespace Data
} // namespace ixblue_stdbin_decoder
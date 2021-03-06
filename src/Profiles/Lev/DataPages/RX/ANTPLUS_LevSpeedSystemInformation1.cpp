#include <Profiles/Lev/DataPages/RX/ANTPLUS_LevSpeedSystemInformation1.h>
#include <Profiles/Lev/ANTPLUS_LevPrivateDefines.h>

LevSpeedSystemInformation1::LevSpeedSystemInformation1(AntRxDataResponse& dp) : LevBaseSpeedSystemInformation(dp) {
}

uint8_t LevSpeedSystemInformation1::getBatteryTemperatureState() {
    return getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BYTE) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BATTERYTEMPERATURE_MASK;
}

uint8_t LevSpeedSystemInformation1::getBatteryTemperatureAlert() {
    return (getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BYTE) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_MASK) >> ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BATTERYTEMPERATUREALERT_SHIFT;
}

uint8_t LevSpeedSystemInformation1::getMotorTemperatureState() {
    return (getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BYTE) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATURE_MASK) >> ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATURE_SHIFT;
}

uint8_t LevSpeedSystemInformation1::getMotorTemperatureAlert() {
    return (getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_BYTE) & ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATUREALERT_MASK) >> ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_TEMPERATURESTATE_MOTORTEMPERATUREALERT_SHIFT;
}


uint8_t LevSpeedSystemInformation1::getErrorMessage() {
    return getData(ANTPLUS_LEV_DATAPAGE_SPEEDSYSTEMINFORMATION1_ERRORMESSAGE_BYTE);
}


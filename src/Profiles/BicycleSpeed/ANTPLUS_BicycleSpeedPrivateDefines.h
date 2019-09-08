#ifndef ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h
#define ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h

/* Channel Config */
#define ANTPLUS_BICYCLESPEED_CHANNELTYPE CHANNEL_TYPE_BIDIRECTIONAL_RECEIVE
#define ANTPLUS_BICYCLESPEED_DEVICETYPE 123
#define ANTPLUS_BICYCLESPEED_CHANNELPERIOD 8118
// 30 / 2.5 = 12
#define ANTPLUS_BICYCLESPEED_SEARCHTIMEOUT 12

/* Base DataPage */
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_DATAPAGE_BYTE 0
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_TOGGLE_BYTE   0
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_BIKESPEEDEVENTTIMELSB_BYTE 4
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_BIKESPEEDEVENTTIMEMSB_BYTE 5
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_CUMULATIVESPEEDREVOLUTIONCOUNTLSB_BYTE 6
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_CUMULATIVESPEEDREVOLUTIONCOUNTMSB_BYTE 7

#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_DATAPAGE_MASK 0x7F
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_TOGGLE_MASK   0x80

#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_TOGGLE_SHIFT  7
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_BIKESPEEDEVENTTIMEMSB_SHIFT 8
#define ANTPLUS_BICYCLESPEED_DATAPAGEBASE_CUMULATIVESPEEDREVOLUTIONCOUNTMSB_SHIFT 8

/* Default Page */
#define ANTPLUS_BICYCLESPEED_DATAPAGE_DEFAULT_NUMBER 0

/* Cumulative Operating Time */
#define ANTPLUS_BICYCLESPEED_DATAPAGE_CUMULATIVEOPERATINGTIME_NUMBER 1

#define ANTPLUS_BICYCLESPEED_DATAPAGE_CUMULATIVEOPERATINGTIME_TIME_LSB_BYTE 1
#define ANTPLUS_BICYCLESPEED_DATAPAGE_CUMULATIVEOPERATINGTIME_TIME_MSB_BYTE 3

/* ManufacturerID */
#define ANTPLUS_BICYCLESPEED_DATAPAGE_MANUFACTURERID_NUMBER 2

#define ANTPLUS_BICYCLESPEED_DATAPAGE_MANUFACTURERINFORMATION_MANUFACTUREREID_BYTE 1
#define ANTPLUS_BICYCLESPEED_DATAPAGE_MANUFACTURERINFORMATION_SERIALNUMBERLSB_BYTE 2
#define ANTPLUS_BICYCLESPEED_DATAPAGE_MANUFACTURERINFORMATION_SERIALNUMBERMSB_BYTE 3

#define ANTPLUS_BICYCLESPEED_DATAPAGE_MANUFACTURERINFORMATION_SERIALNUMBERMSB_SHIFT 8

/* Product ID */
#define ANTPLUS_BICYCLESPEED_DATAPAGE_PRODUCTID_NUMBER 3

#define ANTPLUS_BICYCLESPEED_DATAPAGE_PRODUCTINFORMATION_HARDWAREVERSION_BYTE 1
#define ANTPLUS_BICYCLESPEED_DATAPAGE_PRODUCTINFORMATION_SOFTWAREVERSION_BYTE 2
#define ANTPLUS_BICYCLESPEED_DATAPAGE_PRODUCTINFORMATION_MODELNUMBER_BYTE 3

/* Battery Status */
#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_NUMBER 4

#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_FRACTIONALBATTERYVOLTAGE_BYTE 2
#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_COARSEBATTERYVOLTAGE_BYTE 3
#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_BATTERYSTATUS_BYTE 3

#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_COARSEBATTERYVOLTAGE_MASK 0x0F
#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_BATTERYSTATUS_MASK 0x70

#define ANTPLUS_BICYCLESPEED_DATAPAGE_BATTERYSTATUS_BATTERYSTATUS_SHIFT 4

/* Motion And Speed */
#define ANTPLUS_BICYCLESPEED_DATAPAGE_MOTIONANDSPEED_NUMBER 5

#define ANTPLUS_BICYCLESPEED_DATAPAGE_MOTIONANDSPEED_FLAGS_BYTE 1

#endif // ANTPLUS_BICYCLESPEEDPROFILEPRIVATEDEFINES_h

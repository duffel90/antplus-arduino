/***********************************
 * AntPlus DeviceSearch example
 *
 * The example demonstrates the device
 * search functionality of the router.
 *
 * Author Curtis Malainey
 ************************************/
#include <Arduino.h>
#include "ANT.h"
#include "ANTPLUS.h"

#define BAUD_RATE 9600
// 30s
#define SEARCH_RUNTIME 30*1000

const uint8_t NETWORK_KEY[] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77}; // get this from thisisant.com
uint32_t timeLastSwitch = 0;
bool isSearching = false;

AntWithCallbacks ant = AntWithCallbacks();
AntPlusRouter router = AntPlusRouter();

void searchCallback(uint16_t deviceNumber, uint8_t deviceType, uint8_t transmissionType, uint8_t rssi);
void flipSearch();

void setup() {
    Serial.begin(BAUD_RATE);
    Serial.println("Running");
    Serial1.begin(BAUD_RATE);
    ant.setSerial(Serial1);
    // Delay after initial setup to wait for user to connect on serial

    router.setDriver(&ant); // never touch ant again
    router.setAntPlusNetworkKey(NETWORK_KEY);
    flipSearch();
}

void loop() {
    router.loop();

    if (millis() - timeLastSwitch > SEARCH_RUNTIME) {
        timeLastSwitch = millis();
        flipSearch();
    }
}

void flipSearch() {
    Serial.println("===========================");
    if (isSearching) {
        // starting a search will stop all profiles and will need to be
        // restarted after the search is stopped
        router.startRxSearch(searchCallback);
    } else {
        router.stopRxSearch();
    }
    isSearching = !isSearching;
}

void searchCallback(uint16_t deviceNumber, uint8_t deviceType, uint8_t transmissionType, uint8_t rssi) {
    Serial.print("Device Number: ");
    Serial.print(deviceNumber);
    Serial.print(" Device Type: ");
    switch (deviceType) {
    case ANTPLUS_HEARTRATE_DEVICETYPE:
        Serial.println("Heart Rate");
        break;
    default:
        Serial.println("Unknown");
        break;
    }
    Serial.print(" Transmission Type: ");
    Serial.print(transmissionType);
    Serial.print(" RSSI: ");
    Serial.println(rssi);
}

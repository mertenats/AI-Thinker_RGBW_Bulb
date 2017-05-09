///////////////////////////////////////////////////////////////////////////
//   MISC
///////////////////////////////////////////////////////////////////////////
#define FRIENDLY_NAME "AI RGBW Bulb"

///////////////////////////////////////////////////////////////////////////
//   WiFi
///////////////////////////////////////////////////////////////////////////
#define WIFI_SSID     "" 
#define WIFI_PASSWORD ""

///////////////////////////////////////////////////////////////////////////
//   MQTT
///////////////////////////////////////////////////////////////////////////
#define MQTT_USERNAME     ""
#define MQTT_PASSWORD     ""
#define MQTT_SERVER       ""
#define MQTT_SERVER_PORT  1883

// enable Home Assistant MQTT Discovery feature
#define MQTT_HOME_ASSISTANT_SUPPORT

#if defined(MQTT_HOME_ASSISTANT_SUPPORT)
// template: <discovery prefix>/light/<chip ID>/config, status, state or set
#define MQTT_CONFIG_TOPIC_TEMPLATE            "%s/light/%s/config"
#define MQTT_HOME_ASSISTANT_DISCOVERY_PREFIX  "homeassistant"
#endif 

#define MQTT_STATE_TOPIC_TEMPLATE   "%s/rgbw/state"
#define MQTT_COMMAND_TOPIC_TEMPLATE "%s/rgbw/set"
#define MQTT_STATUS_TOPIC_TEMPLATE  "%s/rgbw/status" // MQTT connection: alive/dead

#define MQTT_STATE_ON_PAYLOAD   "ON"
#define MQTT_STATE_OFF_PAYLOAD  "OFF"

#define MQTT_CONNECTION_TIMEOUT 5000

///////////////////////////////////////////////////////////////////////////
//   DEBUG
///////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERIAL
//#define DEBUG_TELNET

#if defined(DEBUG_TELNET)
#define DEBUG_TELNET_PORT 23
#endif

///////////////////////////////////////////////////////////////////////////
//   OTA
///////////////////////////////////////////////////////////////////////////
#define OTA
//#define OTA_HOSTNAME  "hostname"  // hostname esp8266-[ChipID] by default
//#define OTA_PASSWORD  "password"  // no password by default
//#define OTA_PORT      8266        // port 8266 by default

///////////////////////////////////////////////////////////////////////////
//   TLS
///////////////////////////////////////////////////////////////////////////
//#define TLS
//#define TLS_FINGERPRINT "A5 02 FF 13 99 9F 8B 39 8E F1 83 4F 11 23 65 0B 32 36 FC 07"

///////////////////////////////////////////////////////////////////////////
//   RECORDING STATE
///////////////////////////////////////////////////////////////////////////
#define SAVE_STATE

///////////////////////////////////////////////////////////////////////////
//   GAMMA CORRECTION
///////////////////////////////////////////////////////////////////////////
#define GAMMA_CORRECTION

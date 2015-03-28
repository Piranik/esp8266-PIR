#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER	0x00FF55A4	/* Change this value to load default configurations */
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE

#define LWIP_OPEN_SRC

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.1.100" //or "mqtt.yourdomain.com"
#define MQTT_PORT			1883
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"ESP-PIR"
#define MQTT_USER			"ESP01"
#define MQTT_PASS			"esp01"

#define STA_SSID "SSID"
#define STA_PASS "password"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		2048

//#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
#define PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/
#endif
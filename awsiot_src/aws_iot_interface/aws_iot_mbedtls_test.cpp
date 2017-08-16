//#include "aws_iot_log.h"
//#include "aws_iot_version.h"
//#include "aws_iot_mqtt_interface.h"
//#include "aws_iot_config.h"
//
//int MQTTcallbackHandler(MQTTCallbackParams params) {
//
//	INFO("Subscribe callback");
//	INFO("%.*s\t%.*s",
//		(int)params.TopicNameLen, params.pTopicName,
//		(int)params.MessageParams.PayloadLen, (char*)params.MessageParams.pPayload);
//
//	return 0;
//}
//
//void disconnectCallbackHandler(void) {
//	WARN("MQTT Disconnect");
//	IoT_Error_t rc = NONE_ERROR;
//	if (aws_iot_is_autoreconnect_enabled()) {
//		INFO("Auto Reconnect is enabled, Reconnecting attempt will start now");
//	}
//	else {
//		WARN("Auto Reconnect not enabled. Starting manual reconnect...");
//		rc = aws_iot_mqtt_attempt_reconnect();
//		if (RECONNECT_SUCCESSFUL == rc) {
//			WARN("Manual Reconnect Successful");
//		}
//		else {
//			WARN("Manual Reconnect Failed - %d", rc);
//		}
//	}
//}

//
//void main(void)
//{
//	MQTTClient_t aws_mqtt_client;
//	aws_iot_mqtt_init(&aws_mqtt_client);
//
//	//IoT_Error_t errcode = aws_iot_mqtt_connect(&Params);
//
//}
# AWS IoT SDK for Windows 

To understand in depth on AWS IoT on Windows OS then later port the same code for ThreadX RTOS  supported boards such as Renesas IoT kits.  As of now Renesas IoT boards (Synergy Platform based) don't support any framework or driver to connect AWS IoT Cloud. 

# Summary:

This project combines the open source code MbedTLS, MQTT protocol and securely communicate with AWS IoT things.  Amazon server enforce mutual verification. i.e. client as well as server both need to be authenticated before accept any MQTT payload.

# Requirements:

1.   Windows OS with Visual Studio 2017 Community or any other Visual Studio version.
2.   AWS IoT Account.  
3.   CA Root, AWS IoT certificates and publilc/private Key file.  All of these can be created in AWS IoT console panel. Refer AWS IoT documentation for in depth details.
4.   Download certificate files into certs folder. In case wants to keep the certificate files in different location modify the aws_iot_config.h file according to location.

# Configuration:

The following macros defined in aws_iot_config.h file, modify according to certificates and AWS data center location.

    // =================================================
    #define AWS_IOT_MQTT_HOST              "axxxx2fiyuf.iot.us-east-1.amazonaws.com" ///< Customer     specific MQTT HOST. The same will be used for Thing Shadow
    #define AWS_IOT_MQTT_PORT              8883 ///< default port for MQTT/S
    #define AWS_IOT_MQTT_CLIENT_ID         "Renesas_sks7g2" ///< MQTT client ID should be unique for every device

    #define AWS_IOT_MY_THING_NAME          "Renesas_sks7g2" ///< Thing Name of the Shadow this device is associated with
    #define AWS_IOT_ROOT_CA_FILENAME       "..\\certs\\ca.perm" ///< Root CA file name
    #define AWS_IOT_CERTIFICATE_FILENAME   "..\\certs\\000000cc5-certificate.pem.crt" < device signed certificate file name
    #define AWS_IOT_PRIVATE_KEY_FILENAME   "..\\certs\\000000ccc5-private.pem.key" //Device private key filename







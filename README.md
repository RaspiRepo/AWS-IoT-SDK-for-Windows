** Draft :

# AWS IoT SDK for Windows 
As of now Renesas IoT boards (Synergy Platform based) doesn't have any SDK support for AWS IoT.  The goal of this project is to understand AWS IoT on Windows OS, port the code for Renesas IoT kits, and also to combine the open source code from MbedTLS and  MQTT protocol in order to communicate with AWS IoT. This demo example can be used to verify your IoT application end to end on your developement system like windows or Mac instead of trying on hardware directly. 
   

# Requirements:

1.   Windows OS with Visual Studio 2017 Community or any other Visual Studio version.
2.   AWS IoT Account.  
3.   CA Root, AWS IoT certificates and publilc/private Key file. 

# Step1: 
Follow the instructions in AWS IoT documentation for creating  and downloading the above mentioned certificates in to "certs" folder.

# Step2:
 Modify the predefined aws_iot_config.h  file with the corresponding certification name and AWS data center details.

    // =================================================
    #define AWS_IOT_MQTT_HOST              "axxxx2fiyuf.iot.us-east-1.amazonaws.com" ///< Customer     specific MQTT HOST. The same will be used for Thing Shadow
    #define AWS_IOT_MQTT_PORT              8883 ///< default port for MQTT/S
    #define AWS_IOT_MQTT_CLIENT_ID         "Renesas_sks7g2" ///< MQTT client ID should be unique for every device

    #define AWS_IOT_MY_THING_NAME          "Renesas_sks7g2" ///< Thing Name of the Shadow this device is associated with
    #define AWS_IOT_ROOT_CA_FILENAME       "..\\certs\\ca.perm" ///< Root CA file name
    #define AWS_IOT_CERTIFICATE_FILENAME   "..\\certs\\000000cc5-certificate.pem.crt" < device signed certificate file name
    #define AWS_IOT_PRIVATE_KEY_FILENAME   "..\\certs\\000000ccc5-private.pem.key" //Device private key filename













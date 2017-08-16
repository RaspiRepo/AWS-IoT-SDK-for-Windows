
# AWS IoT SDK for Windows 
As of now Renesas IoT boards (Synergy Platform based) doesn't have any SDK support for AWS IoT.  The goal of this project is to understand AWS IoT on Windows OS, port the code for Renesas IoT kits, Windows 10 IoT Core supporetd boards,  and also to combine the open source code from MbedTLS and  MQTT protocol in order to communicate with AWS IoT. This demo example can be used to verify your IoT application end to end on your developement system like windows or Mac instead of trying on hardware directly. 
   

# Requirements:

1.   Windows OS with Visual Studio 2017 Community or any other Visual Studio version.
2.   AWS IoT Account.  
3.   CA Root, AWS IoT certificates and publilc/private Key file. 

# Step1: 
Follow the instructions in AWS IoT documentation for creating  and downloading the above mentioned certificates in to "certs" folder.

# Step2:
Download/pull this repository to your PC, open Visual Studio file "mbedTLS.sln" under folder name "vs2017_projects".  In case starup project is "mbedTLS" then change "aws_iot_mqtt_mbedtls" as startup project.  You can do this by right click on "aws_iot_mqtt_mbedtls" and "set as Startup Project" 

![vs-startup1](https://user-images.githubusercontent.com/7789293/29370538-86ffbab2-825a-11e7-9c9d-d15f85fe63d8.png)

# Step3:
Modify the predefined aws_iot_config.h  file with the corresponding certification name and AWS data center details.

    // =================================================
    #define AWS_IOT_MQTT_HOST              "axxxx2fiyuf.iot.us-east-1.amazonaws.com" ///< Customer     specific MQTT HOST. The same will be used for Thing Shadow
    #define AWS_IOT_MQTT_PORT              8883 ///< default port for MQTT/S
    #define AWS_IOT_MQTT_CLIENT_ID         "Renesas_sks7g2" ///< MQTT client ID should be unique for every device

    #define AWS_IOT_MY_THING_NAME          "Renesas_sks7g2" ///< Thing Name of the Shadow this device is associated with
    #define AWS_IOT_ROOT_CA_FILENAME       "..\\certs\\ca.perm" ///< Root CA file name
    #define AWS_IOT_CERTIFICATE_FILENAME   "..\\certs\\000000cc5-certificate.pem.crt" < device signed certificate file name
    #define AWS_IOT_PRIVATE_KEY_FILENAME   "..\\certs\\000000ccc5-private.pem.key" //Device private key filename

# Step4:
 Build and Run the application. If certificate file names reference mentioned in Step 3 present application will do TLS handshake sequence and then send JSon formated sensor information to AWS IoT using MQTT protocol.
 
 ![aws-iot-thing-log](https://user-images.githubusercontent.com/7789293/29371150-69c58588-825c-11e7-97f4-6045115c3bde.png)
 


# Step5:
To update changes to MQTT payload or thing name open **awsiot_src\aws_iot_interface\subscribe_publish_sample.c** 

MQTT topic/thing name is in  **Line number 152**. 
     For example **Params.pTopic = "livingroom_airquality";**

To construct your own JSON payload for your application then change **Line number 174**. 

Rebuild and Run the the application. Check the changes in AWS IoT Cpnsole Dashboard under "Test". Refer above screen shot.

The example code provided in this demo will connect AWS IoT and publish MQTT Indoor AirQuality sensor value 5 times and loop stops. 

# Future Work

- Convert this Project into Raspberry PI Raspian/Windows 10 IoT core.
- Explore and make the changes to project to support Azure/Google IoT cloud.
- Port the code to Renesas IoT kits (Threadx RTOS, Synergy Software Platform) such as SKS7G2, S5D9 boards.
- .....


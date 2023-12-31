# CSC4640 Project 1 - Temperature & Humidity Sensor

## Project Description 

For our project, we have developed a battery powered temperature and humidity sensor using the Arduino Uno R3 and the Adafruit AHT 20 Sensor, both connected and placed into a plastic casing which we designed and 3D printed. The device works mainly through the Adafruit sensor by collecting temperature and humidity data values from the environment through the various ventilation holes on the case. It also features battery power so the device can be portable, as well as a USB Type B port to have direct access to the Arduino for code updates without having to dismantle the device. 

 

## Specifications 

According to Adafruit, their AHT20 Sensor’s temperature sensor ranges from -40°C to 85°C, so we planned to aim for the same range also. The accuracy of the device ranges from ± 2.0% of Relative Humidity and ± 0.3°C of Temperature. 

Referencing our tests conducted below in the Device Testing and Markup section, the sensor was already calibrated to subtract 2.6°C and add 4.9% rH. This was done by altering the calculations within the Arduino IDE.

 

## Bill of Materials 

Below is a list of the items we have used for this project without the 3D Printed plastic case. Due to a classroom setting, we were granted the ability to use the Arduino Starter Kit coupled with resistors and wires; below we have listed the alternative with the Arduino Uno Rev3 alone as well if you already have the wires available.
If you do not have wires available, purchase #1 Aruindo Starter kit Multi-language and not #2 Arduino Uno Rev3, however if you already have wires, then you can purchase the #2 Arduino Uno Rev3 by itself.

### Hardware Requirements

| # | Hardware Item                                                                   | Price      | Link                                                                                                                                                     |
|---|------------------------------------------------------------------------|------------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1 | Arduino Starter Kit Multi-language                                     | USD 110.30 | https://store-usa.arduino.cc/products/arduino-starter-kit-multi-language                                                                                 |
| 2 | Arduino Uno Rev3                                                       | USD 27.60  | https://store-usa.arduino.cc/products/arduino-uno-rev3?gclid=CjwKCAjw38SoBhB6EiwA8EQVLuAkw_Bbocaa8Z6p1USAPAG6rVT0UqCvLj45bHut_6ESOfbynF8RkRoCZysQAvD_BwE |
| 3 | Adafruit AHT 20 Sensor                                                 | USD 4.50   | https://www.adafruit.com/product/4566                                                                                                                    |
| 4 | Adafruit FeatherWing OLED - 128x64                                     | USD 14.95  | https://www.adafruit.com/product/4650                                                                                                                    |
| 5 | Amazon Basics 4-Pack 9 Volt Alkaline Performance All-Purpose Batteries | USD 9.99   | https://a.co/d/bKedZnm                                                                                                                                   |

- Approximated Total Cost with Arduino Starter Kit:  USD 139.74 

- Approximated Total Cost with ONLY Arduino Uno R3: USD 57.04 

These items can be purchased through any reputable sellers, however, the links provided are from the direct first-party sellers. 

### Software Requirements

| # | Software Item                 | Price                                 | Link                                                    |
|---|----------------------|---------------------------------------|---------------------------------------------------------|
| 1 | Arduino IDE          | USD 0.00                              | https://www.arduino.cc/en/software                      |
| 2 | Autodesk Fusion 360  | USD 0.00* (Free for College Students) | https://www.autodesk.com/campaigns/education/fusion-360 |
| 3 | UltiMaker Cura 5.4.0 | USD 0.00                              | https://www.ultimaker.com/software/ultimaker-cura/      |

#### Additional Requirements for Arduino IDE
Within Arduino IDE, there are a couple of Libraries that need to be installed to get the Adafruit AHT 20 Sensor and the Adafruit Featherwing OLED add-ons to work with the Arduino Uno Rev3. The following list is all the additional libraries that need to be installed within the Arduino IDE: 

- Adafruit AHTx0 by Adafruit 

- Adafruit BUSIO by Adafruit 

- Adafruit GFX Library by Adafruit 

- Adafruit SH110X by Adafruit 

- Adafruit SSD1306 by Adafruit 

Most of the software listed are by preference except for Arduino IDE which is necessary to be able to upload code to the Arduino Uno Rev3 device. Autodesk Fusion 360 and UltiMaker Cura 5.4.0 were chosen because it was recommended by our professor as well as the 3D Printer available was only compatible with the UltiMaker Cura 5.4.0 software.

## Block Diagram of Device 

The Adafruit AHT20 Sensor gets the readings from the environment and inputs the data into the Arduino Uno Rev3 which is powered by the 9V Battery. Afterwards, the Arduino outputs the data on the Adafruit Featherwing OLED screen for users to see the processed information. 

<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Diagrams/Block%20Diagram.png" alt="Box 1" width="600"/>
</p>

 

## Schematic of the Circuit 

The schematic below shows how the 9V battery is connected to the Arduino Uno Rev3 through the power adapter port. The AHT20 sensor gets its power from the 5V and GND ports of the Arduino. The SDA and SCL pins on the AHT20 are connected to the SDA and SCL pin holes on the Arduino. Finally, the AHT20 sensor and the OLED are connected through the ports on the sides and the connection that came with the OLED display. 

<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Diagrams/Project1_Schematic.png" alt="Box 1" width="600"/>
</p>

 

## Source Code 

The language for the code used for this device was C++, as Arduino uses it. Below is a GitHub link where we have uploaded the source code for free use and manipulation. 

https://github.com/EzraRC/CSC4640-Project1/blob/main/src/Project_1_Temperature_Scanner.ino

 

## 3D Model of Device 

### Box
<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Box%201.jpg" alt="Box 1" width="500"/>
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Box%202.jpg" alt="Box 1" width="448"/>
</p>

### Lid
<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Lid%201.jpg" alt="Lid 1" width="500"/>
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Lid%202.jpg" alt="Lid 2" width="432"/>
</p>

### Completed Box with Lid
<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Completed%202.jpg" alt="Completed Box 2" width="468"/>
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Completed%203.jpg" alt="Completed Box 3" width="500"/>
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/Screenshots/Completed%201.jpg" alt="Completed Box 1" width="500"/>
</p>

## IRL Pictures

### Without Lid
<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/IRL-Pictures/Without%20Lid%201.jpeg" alt="IRL without Lid 1" width="500"/>
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/IRL-Pictures/Without%20Lid%202.jpeg" alt="IRL without Lid 2" width="500"/>
</p>

### Completed Box with Lid
<p float="left">
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/IRL-Pictures/Lid%201.jpg" alt="IRL Completed Box with Lid 1" width="418"/>
 <img src="https://github.com/EzraRC/CSC4640-Project1/blob/main/Images/IRL-Pictures/Lid%202.jpg" alt="IRL Completed Box with Lid 2" width="500"/>
</p>

## IRL Videos

Below is a link to a timeline of the device's development, as well as clips demonstrating its functionality. In the video, you can see the entire development process, from the first version in which we used the Arduino LCD screen that came with the starter kit to upgrading to the Adafruit Featherwing OLED display, as well as when we first used battery power to make the device portable. 

[Click here to see the video!](https://youtu.be/ohcKgYZ_ba4)

## Device Testing

For this section, we conduct tests to determine how accurate our device is compared to another reference device, the Govee Wi-Fi Thermo-Hygrometer. According to our specifications from Adafruit, we are expected to see device ranges from ± 2.0% of Relative Humidity readings and ± 0.3°C of Temperature readings. 

 

### Temperature Testing 

For this test, we have used a Govee Wi-Fi Thermo-Hygrometer as a reference point for temperature sensing to determine the accuracy of our device. Below are comparisons between expected and received readings in Degrees Celsius. 

| Reference Device Temperature (Degrees Celsius) | Adafruit AHT 20 Sensor Reading |
|------------------------------------------------|--------------------------------|
| -2.00                                          |            -1.19               |
| 0.00                                           |             0.79               |
| 18.00                                          |            17.39               |
| 25.00                                          |            24.32               |
| 30.00                                          |            29.85               |

### Humidity Testing 

For this test, we have used a Govee Wi-Fi Thermo-Hygrometer as a reference point for humidity sensing to determine the accuracy of our device. Below are comparisons between expected and received readings in percentages of Relative Humidity. 

| Reference Device Humidity (% rH – Percentage of Relative Humidity) | Adafruit AHT 20 Sensor Reading |
|--------------------------------------------------------------------|--------------------------------|
| 29.43                                                              |            27.62               |
| 33.80                                                              |            36.41               |
| 44.80                                                              |            43.78               |
| 53.90                                                              |            54.36               |
| 63.80                                                              |            63.38               |


## Dimensions 

Below feature two tables which give the length, width, and height of the box and lid respectively in centimeters, as well as the weight of the completed device in grams. 


### Box Dimensions

| Measurement             | Value   |
|-------------------------|---------|
| Length (in centimeters) | 11.00cm |
| Width (in centimeters)  | 8.80cm  |
| Height (in centimeters) | 3.40cm  |
| Weight (in grams)       | 135.00g |

### Lid Dimensions

| Measurement             | Value   |
|-------------------------|---------|
| Length (in centimeters) | 11.70cm |
| Width (in centimeters)  | 9.40cm  |
| Height (in centimeters) | 0.80cm  |
| Weight (in grams)       | 46.00g |

### Completed Box Dimensions

| Measurement             | Value   |
|-------------------------|---------|
| Length (in centimeters) | 11.70cm |
| Width (in centimeters)  | 9.40cm  |
| Height (in centimeters) | 3.51cm  |
| Weight (in grams)       | 181.00g |


## Conclusion 
After working on this project for 2 weeks, we have learned a lot with regards to the 3D modelling and printing process, coding in C++, and scientific testing. The Adafruit sensor was fairly accurate after calibration and competed with the Govee Wi-Fi Thermo-Hygrometer which is a well-renowned device. 

Although the project was a success, we have noted a couple of aspects which we can improve on in the following list: 

- Creating grooves in the box to give the components a structured fit instead of randomly dropping them in and securing with tape. 

- Implement a switch to be able to power on the device without having to open the lid. 

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_AHTX0.h>
#include <Adafruit_SH110X.h>
#include <SPI.h>
#include <Wire.h>

//Adafruit_SSD1306 display = Adafruit_SSD1306(); //Now you can write to this screen using display.
Adafruit_SH1107 display = Adafruit_SH1107(64, 128, &Wire);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;

Adafruit_AHTX0 aht; //For temperature scanner

#define LED      13

void setup() {
  Serial.begin(115200);
  Serial.println("Adafruit AHT10/AHT20 demo!");

  //display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // initialize with the I2C address 0x3C (for the 128x32)
  display.begin(0x3c, true);
  display.clearDisplay(); // Clear the display

  //Corrects display orientation
  display.setRotation(1);

  //Text Formatting
  display.setTextSize(1); //Set our text size, size 1 correlates to 8pt font
  display.setTextColor(WHITE); //We're using a Monochrome OLED so color is irrelevant, pixels are binary.

  pinMode(switchPin, INPUT);

  if (! aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT10 or AHT20 found");
}

void loop() {

  //Clear display
  display.clearDisplay();

  //Set the humidity and temperature value events
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);// populate temp and humidity objects with fresh data

  //Set the cursor to the top of the screen and print the temperature information on the display
  display.setCursor(0, 0);
  display.print("Temperature: "); display.print(temp.temperature); display.println(" C");
  
  //Shift the cursor downward to a new line and print the humidity information on the display
  display.setCursor(0, 15);
  display.print("Humidity: "); display.print(humidity.relative_humidity); display.println("% rH");   

  //Update the display
  display.display();
   
  delay(800);
  }

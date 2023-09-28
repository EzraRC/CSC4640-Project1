#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_AHTX0.h>
#include <Adafruit_SH110X.h>
#include <SPI.h>
#include <Wire.h>

//Adafruit_SSD1306 display = Adafruit_SSD1306(); //Now you can write to this screen using display.
Adafruit_SH1107 display = Adafruit_SH1107(64, 128, &Wire);

Adafruit_AHTX0 aht; //For temperature scanner

void(* resetFunc) (void) = 0;

void setup() {
  Serial.begin(115200);
  
  //display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // initialize with the I2C address 0x3C (for the 128x32)
  display.begin(0x3c, true);
  display.clearDisplay(); // Clear the display

  //Corrects display orientation
  display.setRotation(1);

  //Text Formatting
  display.setTextSize(1); //Set our text size, size 1 correlates to 8pt font
  display.setTextColor(WHITE); //We're using a Monochrome OLED so color is irrelevant, pixels are binary.

  if (! aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
}


void loop() {
  //Clear display
  display.clearDisplay();

  //Set the humidity and temperature value events
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);// populate temp and humidity objects with fresh data

  //Set the cursor to the top of the screen and print the temperature information on the display
  display.setCursor(0, 19);
  display.print("Temperature: "); display.print(temp.temperature - 2.6); display.println(" C"); //Subtracted 3 from Temperature for calibration
  
  //Shift the cursor downward to a new line and print the humidity information on the display
  display.setCursor(0, 34);
  display.print("Humidity: "); display.print(humidity.relative_humidity + 4.9); display.println("% rH");   //Added 6 to Humidity for calibration

  //Update the display
  display.display();
  
  delay(2000);

  resetFunc();
}

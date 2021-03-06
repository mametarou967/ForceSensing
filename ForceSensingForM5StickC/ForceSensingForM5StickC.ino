#include <M5StickC.h>

#define ANALOG_PIN 36
int val = 0;

// the setup routine runs once when M5StickC starts up
void setup(){
  // Initialize the M5StickC object
  M5.begin();
  M5.Lcd.setRotation(3);
  M5.Lcd.setTextSize(2);

  // LCD display
  M5.Lcd.print("Hello World");
}

// the loop routine runs over and over again forever
void loop() {
  M5.update();
  val = analogRead(ANALOG_PIN);

  M5.Lcd.setCursor(0, 0);
  M5.Lcd.setTextColor(WHITE, BLACK);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.printf("read value : %d",val);
  delay(1000);
}

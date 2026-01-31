#include <LiquidCrystal.h>

#define senCO2 A2
#define senCO A0
//LCD Control
#define LCD_CONTRAST_PIN 9
#define LCD_BACKLIGHT_PIN 10

int gas, co2lvl;
int colvl;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


byte smiley[8] = {
  0b00000,
  0b01010,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte sad[8] = {
  0b00000,
  0b01010,
  0b01010,
  0b00000,
  0b00000,
  0b01110,
  0b10001,
  0b00000
};

void setup() {
  // Initialize pins as output
  pinMode(LCD_CONTRAST_PIN, OUTPUT);
  pinMode(LCD_BACKLIGHT_PIN, OUTPUT);

  // Set Contrast Level (76.5 of 255 ~ 30% duty cycle)
  analogWrite(LCD_CONTRAST_PIN, 1);

  // Set Backlight Level (153 of 255 ~ 60% duty cycle)
  analogWrite(LCD_BACKLIGHT_PIN, 153);


  pinMode(senCO2, INPUT);
  pinMode(senCO, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("  CO2 & Co Meter   ");
  lcd.setCursor(0, 1);
  delay(1000);
  lcd.clear();
  lcd.print("Warming coil");
  
  for (int i = 0; i <= 100; i++) {
    lcd.setCursor(12, 0);
    if (i < 100) lcd.print(" ");

    lcd.print(i);
    lcd.print("%");
    delay(100);
  }
  lcd.createChar(0, smiley);
  lcd.createChar(1, sad);
}

void loop() {
  // Carbon Dioxide
  gas = analogRead(senCO2);
  co2lvl = gas - 117;
  co2lvl = map(co2lvl, 0, 1023, 400, 5000);
  Serial.print("CO2 = ");
  Serial.print(co2lvl);
  lcd.setCursor (0,0);
  lcd.print("CO2 level is:");
  lcd.setCursor(0,1);
  lcd.print(co2lvl);
  lcd.print(" ppm");
  
  if((co2lvl >= 350) && (co2lvl <= 1000)) {
    lcd.print("  Good ");
    lcd.write(byte(0));
  }
  else if((co2lvl >= 1000) && (co2lvl <= 2000)) {
    lcd.print("  Bad ");
    lcd.write(byte(1));
  }
  else {
    lcd.print(" Danger!");
  }

  delay(3000);
  lcd.clear();

  // Carbon Monoxide
  gas = analogRead(senCO);
  colvl = map(gas, 5, 1023, 0, 100);
  Serial.print("   CO = ");
  Serial.println(colvl);

  lcd.setCursor (0,0);
 lcd.print("CO level: ");
  lcd.print(colvl);
  lcd.print(" ppm");
lcd.setCursor(0,1);
  if((colvl >= 0) && (colvl <= 9)) {
    lcd.print("  Good ");
    lcd.write(byte(0));
  }
  else if((colvl >= 10) && (colvl <= 25)) {
    lcd.print("  Bad ");
    lcd.write(byte(1));
  }
  else {
    lcd.print(" Danger!");
  }


  delay(3000);
  lcd.clear();
}

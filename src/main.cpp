#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup() {
  // Inisialisasi LCD
  lcd.init();
  // Nyalakan backlight
  lcd.backlight();
}

void loop() {
  // Tampilkan label "Nomor" di baris pertama
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nomor:");

  // Loop untuk menampilkan angka dari 0 hingga 30
  for (int i = 0; i <= 30; i++) {
    lcd.setCursor(7, 0); 
    lcd.print(i);        
    delay(500);          
  }

  // Loop untuk menampilkan angka dari 30 kembali ke 0
  for (int i = 30; i >= 0; i--) {
    lcd.setCursor(7, 0); 
    lcd.print(i);        
    delay(500);          
  }
}
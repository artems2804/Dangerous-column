#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 in PCF8574 by NXP and Set to 0x3F in PCF8574A by Ti
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <Keypad.h> // подключаем библиотеку Keypad

const byte ROWS = 4; // 4 строки
const byte COLS = 4; // 4 столбца

// определим символы для кнопок
char hexaKeys[ROWS][COLS] = {
  {'0','1','2','3'},
  {'4','5','6','7'},
  {'8','9','A','B'},
  {'C','D','E','F'}
};
int r = 0;
byte rowPins[ROWS] = {6, 7, 8, 9}; // цифровые выводы строк 
byte colPins[COLS] = {5, 4, 3, 2}; // цифровые выводы столбцов 
// используем класс библиотеки
Keypad kpd(makeKeymap(hexaKeys), colPins, rowPins, COLS, ROWS);  
void setup() {
 lcd.init();
 lcd.backlight();

}
void loop() {
 char key = kpd.getKey(); 
  if (key){
   switch(key){
    case '0':
    lcd.setCursor(0,0);
    lcd.print(key); 
    break;
    lcd.clear();
    case '1':
    lcd.setCursor(1,0);
    lcd.print(key); 
    break;
    case '2':
    lcd.setCursor(2,0);
    lcd.print(key);
    break;
    case '3':
    lcd.setCursor(3,0);
    lcd.print(key);
    break;
    case '4':
    lcd.setCursor(4,0);
    lcd.print(key);
    break;
    case '5':
    lcd.setCursor(5,0);
    lcd.print(key);
    break;
    case '6':
    lcd.setCursor(6,0);
    lcd.print(key);
    break;
    case '7':
    lcd.setCursor(7,0);
    lcd.print(key);
    break;
    case '8':
    lcd.setCursor(8,0);
    lcd.print(key);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("You is lose!");
    break;
    case '9':
    lcd.setCursor(9,0);
    lcd.print(key);
    delay(100);
    lcd.clear();
    break;
    case 'A':
    lcd.setCursor(10,0);
    lcd.print(key);
    break;
    case 'B':
    lcd.setCursor(11,0);
    lcd.print(key);
    break;
    case 'C':
    lcd.setCursor(12,0);
    lcd.print(key);
    break;
    case 'D':
    lcd.setCursor(13,0);
    lcd.print(key);
    break;
    case 'E':
    lcd.setCursor(14,0);
    lcd.print(key);
    break;
    case 'F':
    lcd.setCursor(15,0);
    lcd.print(key);
    break;
    
    
   }
   
}
}

#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

#include <FastLED.h>

#define NUM_LEDS 48
#define BRIGHTNESS 5
#define TRAIL 220
#define d 400
#define bigD 2000
#define intensity 180

int R = 0;
int G = 0;
int B = 0;

const int buttonPin = 3;
int buttonState = 0; 

CRGB leds[NUM_LEDS];

void setup() {
  lcd.begin(16,2);
  
  pinMode(buttonPin, INPUT);
  FastLED.addLeds<WS2812, A3, GRB>(leds, NUM_LEDS);
  for(int i = 0; i <= NUM_LEDS - 1; i++){
      leds[i] = CHSV(0, 0, 0);
      FastLED.show();
    }
}

void loop() {
  delay(20);
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
      
      //Bouche 1
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Bouche");
      lcd.setCursor(0,1);
      lcd.print("(Bleu)");
      for (int i = 45; i > 44; i--){
  
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(bigD);

      //Pharynx 1
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Pharynx");
      lcd.setCursor(0,1);
      lcd.print("(Jaune)");
      for (int i = 44; i > 43; i--){
    
        leds[i] = CHSV(50, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(bigD);

      //Oesophage 4
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Oesophage");
      lcd.setCursor(0,1);
      lcd.print("(Vert)");
      for (int i = 43; i > 39; i--){
    
        leds[i] = CHSV(100, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(bigD);

      //Estomac 2
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Estomac");
      lcd.setCursor(0,1);
      lcd.print("(Jaune)");
      for (int i = 37; i > 35; i--){
    
        leds[i] = CHSV(50, 255, intensity);
        FastLED.show();
        fadeall();
      }
      delay(bigD);

      //Foie 2
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Foie");
      lcd.setCursor(0,1);
      lcd.print("(Rouge)");
      for (int i = 39; i > 37; i--){
    
        leds[i] = CHSV(7, 255, intensity);
        FastLED.show();
        //delay(d);
        fadeall();
      }
      delay(bigD);

      //Vésicule biliaire 2
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Vesicule");
      lcd.setCursor(0,1);
      lcd.print("biliaire (Vert)");
      for (int i = 35; i > 33; i--){
    
        leds[i] = CHSV(100, 255, intensity);
        FastLED.show();
        //delay(d);
        fadeall();
      }
      delay(bigD);

      //Petit intestin 16
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Petit intestin");
      lcd.setCursor(0,1);
      lcd.print("(Rouge)");
      for (int i = 33; i > 17; i--){
    
        leds[i] = CHSV(7, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(bigD);

      //Appendice 1
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Appendice");
      lcd.setCursor(0,1);
      lcd.print("(Vert)");
      for (int i = 17; i > 16; i--){
    
        leds[i] = CHSV(100, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(bigD);

      //Gros intestin 15-1
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Gros intestin");
      lcd.setCursor(0,1);
      lcd.print("(Bleu)");
      for (int i = 16; i > 13; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(d / 2);
      //Gros intestin 15-2
      for (int i = 13; i > 10; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(d / 2);
      //Gros intestin 15-3
      for (int i = 10; i > 7; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(d / 2);
      //Gros intestin 15-4
      for (int i = 7; i > 4; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(d /2);
      //Gros intestin 15-5
      for (int i = 4; i > 1; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      
      delay(bigD);

      //Rectum 3
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Rectum");
      lcd.setCursor(0,1);
      lcd.print("(Jaune)");
      for (int i = 1; i >= 0; i--){
    
        leds[i] = CHSV(50, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(bigD);
      lcd.clear();
      for (int i = 0; i >= -20; i--){
        FastLED.show();
        delay(d);
        fadeall();
      }
      lcd.clear();
      //delete--------------------------------
      for(int i = 0; i <= NUM_LEDS - 1; i++){
          leds[i] = CHSV(0, 0, 0);
          FastLED.show();
      }
      //----------------------------------------------------------------------------------------
      //----------------------------------------------------------------------------------------
      //----------------------------------------------------------------------------------------
      //Bouche 1
      for (int i = 45; i > 44; i--){
  
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }

      //Pharynx 1
      for (int i = 44; i > 43; i--){
    
        leds[i] = CHSV(50, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }

      //Oesophage 4
      for (int i = 43; i > 39; i--){
    
        leds[i] = CHSV(100, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      delay(d);
      //Estomac 2
      for (int i = 37; i > 35; i--){
    
        leds[i] = CHSV(50, 255, intensity);
        FastLED.show();
        fadeall();
      }
      delay(d*2);
      //Foie 2
      for (int i = 39; i > 37; i--){
    
        leds[i] = CHSV(7, 255, intensity);
        FastLED.show();
        //delay(d);
        fadeall();
      }
      delay(d*2);
      //Vésicule biliaire 2
      for (int i = 35; i > 33; i--){
    
        leds[i] = CHSV(100, 255, intensity);
        FastLED.show();
        //delay(d);
        fadeall();
      }
      delay(d*2);

      //Petit intestin 16
      for (int i = 33; i > 17; i--){
    
        leds[i] = CHSV(7, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      //Gros intestin 15-1
      for (int i = 16; i > 13; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      //Gros intestin 15-2
      for (int i = 13; i > 10; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      //Gros intestin 15-3
      for (int i = 10; i > 7; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      //Gros intestin 15-4
      for (int i = 7; i > 4; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      //Gros intestin 15-5
      for (int i = 4; i > 1; i--){
    
        leds[i] = CHSV(160, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }

      //Rectum 3
      for (int i = 1; i >= 0; i--){
    
        leds[i] = CHSV(50, 255, intensity);
        FastLED.show();
        delay(d);
        fadeall();
      }
      for (int i = 0; i >= -20; i--){
        FastLED.show();
        delay(d);
        fadeall();
      }

  
  lcd.clear();
  //delete--------------------------------
      for(int i = 0; i <= NUM_LEDS - 1; i++){
          leds[i] = CHSV(0, 0, 0);
          FastLED.show();
      }
  //--------------------------------------
  }

}
void fadeall(){
  for(int i = 0; i <= NUM_LEDS - 1; i++){
    leds[i].nscale8(TRAIL);
    }
  }

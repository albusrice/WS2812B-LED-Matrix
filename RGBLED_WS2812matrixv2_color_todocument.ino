/*WS2812 DIY MATRIX BOARD
  date: Dec 14, 2017
  license: GNU GENERAL PUBLIC LICENSE
  
  Requires the Adafruit NeoPixel library and MatrixMath library. It's awesome, 
  go get it.
  https://github.com/adafruit/Adafruit_NeoPixel
  http://playground.arduino.cc/Code/MatrixMath
    
  This an example code for a DIY WS2812 Matrix Led Board. This example
  display text from A to Z.
  
  For help linking WS2812 breakouts, checkout the following hookup guide:
  https://learn.sparkfun.com/tutorials/ws2812-breakout-hookup-guide
  
  Before uploading the code, make sure you adjust the two defines at the
  top of this sketch: *Str, PIN and LED_COUNT. *Str is the string to be displayed
  in CAPS. Pin should be the Arduino pin you've got connected to the first pixel's 
  DIN pin. By default it's set to Arduino pin 2. LED_COUNT should be the number of 
  breakout boards you have linked up.
*/
#include <Adafruit_NeoPixel.h>
#include <MatrixMath.h>
#include <string.h>
#include "WS2812_Definitions.h"
#include "Char_Definitions.h"


//---------------PARAMETERS FOR LED BOARD-------------------------------------------
#define PIN 2
#define LED_COUNT 35
#define row 5
#define col 7
#define WAIT 300

char *Str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";// Type Text To Display

//------------------EDITING VARIABLES HERE IS UNNECESSARY---------------------------
unsigned long disp[row][col];   // matrix to display
unsigned long buff[row][col];   // buffer matrix
int rainbowScale = 192;         // rainbow variable
int countColor = 0;             // rainbow counter
int strlength = 0;              // string length counter
int countChar = 0;              // string indexing  

// Create an instance of the Adafruit_NeoPixel class called "leds".
// That'll be what we refer to from here on...
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
    strcat(Str,"     "); // This is to clear the screen at the end of the screen
    strlength = strlen(Str);
    rainbowScale = rainbowScale / strlength;
    
    leds.begin();       // Call this to start up the LED strip.
    clearLEDs();        // This function, defined below, turns all LEDs off...
    leds.show();        // ...but the LEDs don't actually update until you call this.
    Serial.begin (9600);
    resetMat(disp);
    resetMat(buff);
}

void loop()
{
    dispScreen(disp,300);
    shiftScreenLeft(disp,buff);
    shiftBufferLeft(buff);

    if(isZeros(buff)){
        char2disp(Str[countChar],rainbowOrder((rainbowScale * (countChar + countColor)) % 192),buff);
        countChar++;
        if (countChar>strlength-2) {
            countChar = 0;
            countColor++;
            if (countColor>strlength-2)countColor = 0;
        }
    }

}
bool isZeros(unsigned long Mat[][col])
{   
   //This function checks if a matrix is all zero in its entries
    for (int i = 0; i<row; i++){
        for(int j=0; j<col;j++){
            if(Mat[i][j]!=0)return false;
        }
    }
    return true;
}
void shiftScreenLeft(unsigned long dispMat[][col],unsigned long buffM[][col])
{
    // Column shift the display matrix to the left by one column by adding one column 
    // from the buffer matrix
    for (int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            if(j==col-1){
                dispMat[i][j]=buffM[i][0];
            }else{
                dispMat[i][j] = dispMat[i][j+1];
            }
        }
    }

}
void shiftBufferLeft(unsigned long buffM[][col])
{
    // column shift the buffer matrix to the left by one column
    for (int i=0; i<row; i++){
        for(int j=0; j<col-1;j++){
            buffM[i][j] = buffM[i][j+1];
            if(j== col-1){
                buffM[i][j+1]=BLACK;
            }
        }
    }

}
void resetMat(unsigned long Mat[][col])
{
  // Zero the matrix
    for (int i = 0; i<row; i++){
        for(int j=0; j<col;j++){
            Mat[i][j] = 0;
        }
    }
}

void dispScreen(unsigned long dispMat[][col],int wait)
{
  // Display the matrix that the user intend to display
    clearLEDs(); // off all the LEDs
    for (int i = 0; i<row; i++){
        for(int j=0; j<col;j++){
            if(dispMat[i][j]!= 0){
                if(i%2==0)leds.setPixelColor(i*7+j, dispMat[i][j]);  // read matrix row in order
                else leds.setPixelColor((i+1)*7-1-j, dispMat[i][j]); // read matrix row in reverse order
            }
        }
    }
    leds.show();
    delay(wait);
}

void clearLEDs()
{
    for (int i=0; i<LED_COUNT; i++)
    {
        leds.setPixelColor(i, 0);
    }
}
// Input a value 0 to 191 to get a color value.
// The colors are a transition red->yellow->green->aqua->blue->fuchsia->red...
//  Adapted from Wheel function in the Adafruit_NeoPixel library example sketch
uint32_t rainbowOrder(byte position)
{
    // 6 total zones of color change:
    if (position < 31)  // Red -> Yellow (Red = FF, blue = 0, green goes 00-FF)
    {
        return leds.Color(0xFF, position * 8, 0);
    }
    else if (position < 63)  // Yellow -> Green (Green = FF, blue = 0, red goes FF->00)
    {
        position -= 31;
        return leds.Color(0xFF - position * 8, 0xFF, 0);
    }
    else if (position < 95)  // Green->Aqua (Green = FF, red = 0, blue goes 00->FF)
    {
        position -= 63;
        return leds.Color(0, 0xFF, position * 8);
    }
    else if (position < 127)  // Aqua->Blue (Blue = FF, red = 0, green goes FF->00)
    {
        position -= 95;
        return leds.Color(0, 0xFF - position * 8, 0xFF);
    }
    else if (position < 159)  // Blue->Fuchsia (Blue = FF, green = 0, red goes 00->FF)
    {
        position -= 127;
        return leds.Color(position * 8, 0, 0xFF);
    }
    else  //160 <position< 191   Fuchsia->Red (Red = FF, green = 0, blue goes FF->00)
    {
        position -= 159;
        return leds.Color(0xFF, 0x00, 0xFF - position * 8);
    }
}


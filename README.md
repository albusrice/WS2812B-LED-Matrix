# WS2812B-LED-Matrix
This is an example for a 5x7 LED Matrix Capable of displaying text with the use of a matrix. This example uses WS2812B LED Strips that you can easily purchase at ebay or amazon. 

## Getting Started
### Required Components
1) Any arduino (In this example we will be using an Arduino Nano)
2) 35 WS2812B LED Strips (cut into 5 strips)
### Hooking Up the ciruit
Hook up the circuit as shown in the circuit diagram. with Din connected to PIN 2.

![Alt text](CircuitDiagram.jpg?raw=true| width=100)

### Prerequisites
The following is the software and libaries required to  run the example code:

1) [Arduino IDE](https://www.arduino.cc/en/main/software).
2) [`MatrixMath.h`](https://github.com/eecharlie/MatrixMath)
3) [`Adafruit_NeoPixel.h`](https://github.com/adafruit/Adafruit_NeoPixel)

#### Importing Library In Arduino IDE
This is the instuctions to upload a Library into the Arduino IDE.

1) Grab the source code from link given above, and put in a folder called MatrixMath.
2) Put the MatrixMath folder in "libraries\".
3) In the Arduino IDE, create a new sketch (or open one) and
4) Select from the menubar "Sketch->Import Library->MatrixMath".
5) Once the library is imported, a `#include <MatrixMath.h>` line will appear at the top of your Sketch.
6) Repeat step 1 for `Adafruit_NeoPixel.h`.

## Deployment
1) Download the files in this repository. 
2) Open `RGBLED_WS2812matrix.ino` in the Arduino IDE
3) Update `*Str` to the text that you want the display in the matrix 
4) Upload and Enjoy :)

## Authors
* **Ryan Seah ** - *Initial work* - [albusSimba]( https://github.com/albusSimba)
## License
The project is free for non-commercial purposes.




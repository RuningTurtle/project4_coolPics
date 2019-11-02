/**
 * Color.cpp
 * Project UID 8b3bcc444eb500121e420f7e2e359014
 *
 * EECS 183, Fall 2019
 * Project 4: CoolPics
 *
 * Tin Long Rex Fung, Isaac Lok-Tin Li
 * rexfung, isaliac
 *
 * This file contains the class "Point"
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.
int Color::checkRange(int val) {
	if (val < 0) { // 0 is min value for RGB
		return 0;
	}
	else if (val > 255) { // 255 is max value for RGB
		return 255;
	}
	else {
		return val;
	}
}
Color::Color() { // sets to black
	red = 0;
	green = 0;
	blue = 0;
}
Color::Color(int redVal, int greenVal, int blueVal) { // sets to given RGB color
	red = checkRange(redVal);
	green = checkRange(greenVal);
	blue = checkRange(blueVal);
}
void Color::setRed(int redVal) {
	red = checkRange(redVal);
}
int Color::getRed() {
	return red;
}
void Color::setGreen(int greenVal) {
	green = checkRange(greenVal);
}
int Color::getGreen() {
	return green;
}
void Color::setBlue(int blueVal) {
	blue = checkRange(blueVal);
}
int Color::getBlue() {
	return blue;
}
void Color::read(istream& ins) { // reads from istream the RGB values
	int redVal;
	int greenVal;
	int blueVal;
	ins >> redVal >> greenVal >> blueVal;
	red = checkRange(redVal);
	green = checkRange(greenVal);
	blue = checkRange(blueVal);
}
void Color::write(ostream& outs) { // writes RGB values to ostream
	outs << red << " " << green << " " << blue;
}

// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}

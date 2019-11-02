/**
 * Point.cpp
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

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int xVal, int yVal) {
	x = checkRange(xVal);
	y = checkRange(yVal);
}
void Point::setX(int xVal) {
	x = checkRange(xVal);
	return;
}
int Point::getX() {
	return x;
}
void Point::setY(int yVal) {
	y = checkRange(yVal);
	return;
}
int Point::getY() {
	return y;
}
void Point::read(istream& ins) {
	char temp;
	int xVal;
	int yVal;
	ins >> temp >> xVal >> temp >> yVal >> temp;
	x = checkRange(xVal);
	y = checkRange(yVal);
	return;
}
void Point::write(ostream& outs) {
	outs << '(' << x << ',' << y << ')';
	return;
}
int Point::checkRange(int val) {
	if (val < 0) {
		return 0;
	}
	else if (val > DIMENSION - 1) {
		return DIMENSION - 1;
	}
	else {
		return val;
	}
}

// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}

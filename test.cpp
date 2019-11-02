// This is the test file for pics.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Graphics.h"
#include "Point.h"

void testPoint();
void testColor();
void testGraphics();

int main() {
	testPoint();
	testColor();
	testGraphics();
	return 0;
}

void testPoint() {
	cout << "####Testing class \"Point\":\n";

	cout << "Test for default constructor:\n";
	Point p0;
	p0.write(cout);
	cout << endl;

	cout << "Test for non-default constructor:\n";
	Point p1(19, 45);
	p1.write(cout);
	cout << endl;
	Point p2(0, 99);
	p2.write(cout);
	cout << endl;
	Point p3(-1, 100);
	p3.write(cout);
	cout << endl;

	cout << "Test for setters:\n";
	p0.setX(19);
	p0.setY(45);
	p0.write(cout);
	cout << endl;
	p0.setX(99);
	p0.setY(0);
	p0.write(cout);
	cout << endl;
	p0.setX(-100);
	p0.setY(1945);
	p0.write(cout);
	cout << endl;

	cout << "Test for getters:\n";
	cout << p1.getX() << "," << p1.getY();
	cout << endl;
	
	cout << endl;
	return;
}
void testColor() {
	cout << "####Testing class \"Color\":\n";

	cout << "Testing constructors:\n";
	Color c0;
	c0.write(cout);
	cout << endl;
	Color c1(0, 255, 256);
	c1.write(cout);
	cout << endl;
	Color c2(-255, 128, 1945);
	c2.write(cout);
	cout << endl;
	
	cout << "Testing setBlue() and getBlue():\n";
	c1.setBlue(19);
	cout << c1.getBlue();
	cout << endl;

	cout << "Testing getGreen():\n";
	cout << c1.getGreen(); 
	cout << endl;

	cout << endl;
	return;
}
void testGraphics() {
	cout << "####Testing class \"Graphics\":\n";

	cout << "Testing constructor: Should show up as all black\n";
	Graphics g0;
	g0.writeFile("g0");

	cout << "Testing setPixel(): Should show up as an \"L\"\n";
	Color yellow(255, 255, 0);
	g0.setPixel(0, 0, yellow);
	g0.setPixel(0, 99, yellow);
	g0.setPixel(99, 99, yellow);
	g0.writeFile("g0_threeCorners");

	cout << "Testing initArray() and clear(): Should show up as all black\n";
	g0.clear();
	g0.writeFile("g0_cleared");
	cout << endl;
	cout << "Please check project directory for .bmp files";
	cout << endl;
	return;
}
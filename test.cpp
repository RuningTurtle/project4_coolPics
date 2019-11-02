/**
 * test.cpp
 * Project UID 8b3bcc444eb500121e420f7e2e359014
 *
 * EECS 183, Fall 2019
 * Project 4: CoolPics
 *
 * Tin Long Rex Fung, Isaac Lok-Tin Li
 * rexfung, isaliac
 *
 * This program tests the classes and their member functions for project 4
 */
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
void testLine();
void testTriangle();
void testCircle();
void testRectangle();

int main() {
	testPoint();
	testColor();
	testGraphics();
	testLine();
	testTriangle();
	testCircle();
	testRectangle();
	return 0;
}

void testPoint() {
	cout << "####Testing class \"Point\":\n";

	cout << "Test for default constructor:\n";
	Point p0;
	cout << p0 << endl;

	cout << "Test for non-default constructor:\n";
	Point p1(19, 45);
	cout << p1 << endl;
	Point p2(0, 99);
	cout << p2 <<endl;
	Point p3(-1, 100);
	cout << p3 << endl;

	cout << "Test for setters:\n";
	p0.setX(19);
	p0.setY(45);
	cout << p0 << endl;
	p0.setX(99);
	p0.setY(0);
	cout << p0 <<endl;
	p0.setX(-100);
	p0.setY(1945);
	cout << p0 << endl;

	cout << "Test for getters:\n";
	cout << p1.getX() << "," << p1.getY() << endl;
	
	cout << endl;
	return;
}
void testColor() {
	cout << "####Testing class \"Color\":\n";

	cout << "Testing constructors:\n";
	Color c0;
	cout << c0 << endl;
	Color c1(0, 255, 256);
	cout << c1 << endl;
	Color c2(-255, 128, 1945);
	cout << c2 << endl;
	
	cout << "Testing setBlue() and getBlue():\n";
	c1.setBlue(19);
	cout << c1.getBlue() << endl;

	cout << "Testing getGreen():\n";
	cout << c1.getGreen() << endl; 

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
	cout << "Please check project directory for .bmp files";
	cout << endl;
	return;
}
void testLine() {
	cout << "####Testing class \"Line\":\n";

	Point pt1;
	Point pt2(19, 45);
	Color black;
	
	cout << "Testing constructors:\n";
	Line l0;
	cout << l0 << endl;
	Line l1(pt1, pt2, black);
	cout << l1 << endl;

	cout << "Testing setEnd():\n";
	Point end(99, 99);
	l0.setEnd(end);
	cout << l0 << endl;

	cout << "Testing getStart():\n";
	cout << l0.getStart() << endl;

	cout << "Testing write():\n";
	l0.write(cout);
	cout << endl;

	cout << endl;
	return;
}
void testTriangle() {
	cout << "####Testing class \"Triangle\":\n";

	Point pt1;
	Point pt2(0, 99);
	Point pt3(99, 50);
	Color black;
	Color white(255, 255, 255);
	Color grey(128, 128, 128);

	cout << "Testing constructors:\n";
	Triangle t0;
	cout << t0 << endl;
	Triangle t1(pt1, pt2, pt3, black);
	cout << t1 << endl;
	Triangle t2(pt1, black, pt2, white, pt3, grey);
	cout << t2 << endl;

	cout << "Testing setVertexThree():\n";
	Point pt4(50, 50);
	t2.setVertexThree(pt4);
	cout << t2 << endl;

	cout << "Testing getVertexThree():\n";
	cout << t2.getVertexThree() << endl;

	cout << "Testing getVertexThreeColor():\n";
	cout << t2.getVertexThreeColor() << endl;

	cout << "Testing write():\n";
	t2.write(cout);
	cout << endl;

	cout << endl;
	return;
}
void testCircle() {
	cout << "####Testing class \"Circle\":\n";
	
	Point pt1(50, 50);
	int r1 = 20;
	int r2 = -4;
	Color black;

	cout << "Testing constructors and checkRadius():\n";
	Circle c0;
	cout << c0 << endl;
	Circle c1(pt1, r1, black);
	cout << c1 << endl;
	Circle c2(pt1, r2, black);
	cout << c2 << endl;

	cout << "Testing setCenter():\n";
	Point pt2(25, 25);
	c1.setCenter(pt2);
	cout << c1 << endl;

	cout << endl;
	return;
}
void testRectangle() {
	cout << "####Testing class \"Rectangle\":\n";

	Point pt1;
	Point pt2(50, 50);
	Color black;
	Color white(255, 255, 255);
	Color blue(0, 0, 255);
	Color yellow(255, 255, 0);

	cout << "Testing constructors:\n";
	Rectangle r0;
	cout << r0 << endl;
	Rectangle r1(pt1, pt2, black);
	cout << r1 << endl;
	Rectangle r2(pt1, pt2, black, white, blue, yellow);
	cout << r2 << endl;

	cout << "Testing setColor():\n";
	r0.setColor(white);
	cout << r0 << endl;

	cout << "Testing getEnd():\n";
	cout << r1.getEnd() << endl;

	cout << "Testing setStart():\n";
	Point pt3(99, 99);
	r1.setStart(pt3);
	cout << r1 << endl;

	cout << endl;
	return;
}

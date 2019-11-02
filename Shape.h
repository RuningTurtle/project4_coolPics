/**
 * Shape.h
 * Project UID 8b3bcc444eb500121e420f7e2e359014
 *
 * EECS 183, Fall 2019
 * Project 4: CoolPics
 *
 * Base class for all shapes.
 */

#ifndef SHAPE_H
#define SHAPE_H

#include "Graphics.h"

class Shape
{
public:
    /**
     * Requires: Nothing.
     * Modifies: drawer.
     * Effects:  Draws the shape.
     */
	virtual void draw(Graphics &drawer);
};

#endif

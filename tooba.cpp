#include "tooba.h"
#include <GL/glut.h>

tooba::tooba() {}

tooba::tooba(int x,int y , int length, int width , int RGB1, int RGB2, int RGB3)
{ 
	this->x = x;
	this->y = y;
	this->length = length;
	this->width = width;
	setColor( RGB1, RGB2, RGB3);
	drawMyBrick(x, y, length, width);

}
void tooba::setCoordinates(int x, int y)
{
	this->x = x;
	this->y = y;
}

int tooba::getXCoordinate(){	return x;	}

int tooba::getYCoordinate(){	return y;	}



void tooba::setColor(int RGB1, int RGB2, int RGB3) 
{
	this->RGB1 = RGB1;
	this->RGB2 = RGB2;
	this->RGB3 = RGB3;
}
void tooba::getColor() 
{
	glColor3d(RGB1, RGB2, RGB3);
}
void tooba::drawMyBrick(int x, int y, int length, int width)
{
	setCoordinates(x, y);
	glBegin(GL_QUADS);
	getColor();
	glVertex2d(x, y);
	glVertex2d(x, y - length);
	glVertex2d(x + width, y - length);
	glVertex2d(x + width, y);
	glEnd();
	glFlush();
}


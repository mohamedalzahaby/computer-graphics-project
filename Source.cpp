#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <math.h>
#include <GL/glut.h>
#include "tooba.h"
using namespace std;


void init(void)
{
	glClearColor(0, 0, 1, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 500, 0.0, 500);
}

void drawBricks(tooba arrayofobjects[], int x, int y, int l, int w)
{
	int intitialx = x;
	
	for (int j = 0; j < 9; j++)
	{
		//myobject.drawMyBrick(x, y, l, w);
		//myobject(x,y,l,w,1,0,0);
		arrayofobjects[j].setColor(1, 0, 0);
		arrayofobjects[j].drawMyBrick(x, y, l, w);	
		x += 40;
	}
	x = intitialx;
	y += 30;

	//2nd line

	for (int j = 9; j < 18; j++)
	{
		//myobject.drawMyBrick(x, y, l, w);
		//myobject(x,y,l,w,1,0,0);
		arrayofobjects[j].setColor(1, 0, 0);
		arrayofobjects[j].drawMyBrick(x, y, l, w);
		x += 40;
	}
	x = intitialx;
	y += 30;
	//3rd line
	for (int j = 18; j < 27; j++)
	{
		//myobject.drawMyBrick(x, y, l, w);
		//myobject(x,y,l,w,1,0,0);
		arrayofobjects[j].setColor(1, 0, 0);
		arrayofobjects[j].drawMyBrick(x, y, l, w);
		x += 40;
	}
	x = intitialx;
	y += 30;

	//4rth line 
	for (int j = 27; j < 36; j++)
	{
		//myobject.drawMyBrick(x, y, l, w);
		//myobject(x,y,l,w,1,0,0);
		arrayofobjects[j].setColor(1, 0, 0);
		arrayofobjects[j].drawMyBrick(x, y, l, w);
		x += 40;
	}
	x = intitialx;
	y += 30;





}

void DrawBuddle()
{
	//glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(190, 50);
	glVertex2d(190, 40);
	glVertex2d(290, 40);
	glVertex2d(290, 50);
	glEnd();
	//glFlush();
}
void DrawBall()
{
	//glClear(GL_COLOR_BUFFER_BIT);

	float theta;
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++)
	{
		theta = i*3.142 / 180;
		glVertex2f(220 + 10 * cos(theta), 220 + 10 * sin(theta));
	}
	glEnd();
	//glFlush();
}
void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	DrawBuddle();
	DrawBall();
	int x = 60;
	int y = 300;
	int length = 10;
	int width = 30;
	tooba arrayOfObjects[36];
	//arrayOfObjects[36] = { tooba(x,y,length,width,1,0,0) };
	//tooba myobject(x, y, length, width, 1, 0, 0);
	drawBricks(arrayOfObjects, x, y, length, width);
	glEnd();
	glFlush();

}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(200, 50);
	glutInitWindowSize(700, 600);
	glutCreateWindow("Brick breaker");
	init();
	glutDisplayFunc(Display);
	glutMainLoop();




}


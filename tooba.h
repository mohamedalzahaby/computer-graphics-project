#pragma once
class tooba
{
private:
	int x, y;
	int length, width;
	int RGB1, RGB2,  RGB3;

public:
	tooba();
	tooba(int , int ,int ,int , int ,int ,int);
	void setCoordinates(int ,int );
	int getXCoordinate();
	int getYCoordinate();
	void setColor(int, int, int);
	void getColor();
	void drawMyBrick(int, int, int, int);
	
};


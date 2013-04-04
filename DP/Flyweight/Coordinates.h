/*
 * Coordinates.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef COORDINATES_H_
#define COORDINATES_H_

class Coordinates
{
public:
	Coordinates(int x, int y);
	~Coordinates();

	void setXaxis(int x);
	void setYaxis(int y);

	int getXaxis()const;
	int getYaxis()const;

private:
	int xAxis;
	int yAxis;
};

Coordinates::Coordinates(int x, int y):xAxis(x), yAxis(y)
{}

Coordinates::~Coordinates(){}

void Coordinates::setXaxis(int x)
{
	this->xAxis = x;
}

void Coordinates::setYaxis(int y)
{
	this->yAxis = y;
}

int Coordinates::getXaxis()const
{
	return this->xAxis;
}

int Coordinates::getYaxis()const
{
	return this->yAxis;
}


#endif /* COORDINATES_H_ */

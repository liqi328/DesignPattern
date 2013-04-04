/*
 * Dimensions.h
 *
 *  Created on: 2013-4-3
 *      Author: Administrator
 */

#ifndef DIMENSIONS_H_
#define DIMENSIONS_H_

class Dimensions
{
public:
	Dimensions(double w, double h);
	~Dimensions();

	void setWidth(double w);
	void setHeight(double h);

	double getWidth()const;
	double getHeight()const;

private:
	double width;
	double height;
};

Dimensions::Dimensions(double w, double h):width(w), height(h){}

Dimensions::~Dimensions(){}

void Dimensions::setWidth(double w)
{
	this->width = w;
}

void Dimensions::setHeight(double h)
{
	this->height = h;
}

double Dimensions::getWidth()const
{
	return this->width;
}

double Dimensions::getHeight()const
{
	return this->height;
}


#endif /* DIMENSIONS_H_ */

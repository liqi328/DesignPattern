/*
 * ICloneable.h
 *
 *  Created on: 2013-3-25
 *      Author: Administrator
 */

#ifndef ICLONEABLE_H_
#define ICLONEABLE_H_

class ICloneable
{
public:
	ICloneable(){}
	virtual~ ICloneable(){}

	virtual ICloneable* clone()const = 0;
};


#endif /* ICLONEABLE_H_ */

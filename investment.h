/*
 * investment.h
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */

#ifndef INVESTMENT_H_
#define INVESTMENT_H_
class investment
{
public:
	virtual void acceptamount()=0;
	virtual void displayamount()=0;
	virtual float totalinvestment()=0;
	virtual float maturity()=0;

};




#endif /* INVESTMENT_H_ */

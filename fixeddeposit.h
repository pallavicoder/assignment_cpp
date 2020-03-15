/*
 * fixed.h
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */

#ifndef fixeddeposit_H_
#define fixeddeposit_H_
#include"investment.h"
class fixeddeposit :public investment
{

private:
	float amount;
public:
	fixeddeposit();
	fixeddeposit(float amount);
	void acceptamount();
	void displayamount();
	float totalinvestment();
	float maturity();
	float getAmount() const;
	void setAmount(float amount);
};



#endif /* fixeddeposit_H_ */

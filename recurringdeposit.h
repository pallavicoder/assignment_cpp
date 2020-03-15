/*
 * recurringdeposit.h
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */

#ifndef RECURRINGDEPOSIT_H_
#define RECURRINGDEPOSIT_H_
#include"investment.h"
class recurringdeposit :public investment
{

private:
	float amount;
public:
	recurringdeposit();
	recurringdeposit(float amount);
	void acceptamount();
	void displayamount();
	float totalinvestment();
	float maturity();
	float getAmount() const;
	void setAmount(float amount);
};



#endif /* RECURRINGDEPOSIT_H_ */

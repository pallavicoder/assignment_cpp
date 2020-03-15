/*
 * sharemarket.h
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */

#ifndef sharemarket_H_
#define sharemarket_H_
#include"investment.h"
class sharemarket :public investment
{

private:
	float amount;
public:
	sharemarket();
	sharemarket(float amount);
	void acceptamount();
	void displayamount();
	float totalinvestment();
	float maturity();
	float getAmount() const;
	void setAmount(float amount);
};



#endif /* sharemarket_H_ */


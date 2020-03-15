

/*
 * recurringdeposit.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */


#include<iostream>
#include "investment.h"
#include "recurringdeposit.h"
using namespace std;
recurringdeposit::recurringdeposit()
{
	this->amount = 0.0;
}
recurringdeposit::recurringdeposit(float amount)
{
	this->amount = amount;

}

float recurringdeposit::getAmount() const {
	return amount;
}

void recurringdeposit::setAmount(float amount) {
	this->amount = amount;
}

void recurringdeposit::acceptamount()
{
	cout<<"enter amount"<<endl;
	cin>>amount;
}

void recurringdeposit::displayamount()
{
	cout<<"total balance is"<<this->amount<<endl;


}

float recurringdeposit::totalinvestment()
{
	return this->amount = (this->amount * 0.012)+(this->amount);
}

float recurringdeposit::maturity()
{
	return this->totalinvestment()*5.0;

}


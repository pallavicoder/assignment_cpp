/*
 * fixed.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */



#include<iostream>
#include "investment.h"
#include "fixeddeposit.h"
using namespace std;
fixeddeposit::fixeddeposit()
{
	this->amount = 0.0;
}
fixeddeposit::fixeddeposit(float amount)
{
	this->amount = amount;

}

float fixeddeposit::getAmount() const {
	return amount;
}

void fixeddeposit::setAmount(float amount) {
	this->amount = amount;
}

void fixeddeposit::acceptamount()
{
	cout<<"enter amount"<<endl;
	cin>>amount;
}

void fixeddeposit::displayamount()
{
	cout<<"total balance is"<<this->amount<<endl;


}

float fixeddeposit::totalinvestment()
{
	return this->amount = (this->amount * 0.01)+(this->amount);
}

float fixeddeposit::maturity()
{
	return this->totalinvestment()*5.0;

}


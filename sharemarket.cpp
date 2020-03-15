/*
 * sharemarket.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include "investment.h"
#include "sharemarket.h"
using namespace std;
sharemarket::sharemarket()
{
	this->amount =0.0;
}
sharemarket::sharemarket(float amount)
{
	this->amount = amount;

}

float sharemarket::getAmount() const {
	return amount;
}

void sharemarket::setAmount(float amount) {
	this->amount = amount;
}

void sharemarket::acceptamount()
{
	cout<<"enter amount"<<endl;
	cin>>amount;
}

void sharemarket::displayamount()
{
	cout<<"total balance is"<<this->amount<<endl;


}

float sharemarket::totalinvestment()
{
	return  this->amount = ((this->amount * 0.016)+(this->amount)-(0.02*this->amount));
}

float sharemarket::maturity()
{
	return this->totalinvestment()*5.0;

}




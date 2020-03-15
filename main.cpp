//============================================================================
// Name        : investment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "investment.h"
#include "recurringdeposit.h"
#include "fixeddeposit.h"
#include "sharemarket.h"


using namespace std;


int main() {

	int i;
	int choice;
	investment*ptr[3];
for(i=0;i<3;i++)
{
	cout<<"0.exit"<<endl;
	cout<<"1.recurringdeposit"<<endl;
	cout<<"2.fixeddeposit"<<endl;
	cout<<"3.sharemarket"<<endl;
	cout<<"enter choice"<<endl;
	cin>>choice;

	switch(choice)
	{
	case 1:
		ptr[i]= new recurringdeposit;
		break;

	case 2:
		ptr[i]= new fixeddeposit;

		break;

	case 3:ptr[i]= new sharemarket;
		break;
	}
	ptr[i]->acceptamount();
}
float total;
for(i=0;i<3;i++)
{


	total= total+ptr[i]->totalinvestment();
}
cout<<"total investment of customers is:"<<total<<endl;

float sum;
for(i=0;i<3;i++)
{
	sum = sum+ptr[i]->maturity();
}
cout<<"total maturity of  of customers is:"<<sum<<endl;

for(i=0;i<3;i++)
{
	delete ptr[i];
}

	return 0;
}

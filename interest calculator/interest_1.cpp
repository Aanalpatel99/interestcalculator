#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

class simple
{
	public:
		float principal_amount,time,rate_d,interest,Rate,total_amount;
		void sinterest();
};

void simple::sinterest()
{
	cout<<"\nenter the amount:";
	cin>>principal_amount;
	cout<<"\nenter time in years:";
	cin>>time;
	cout<<"\nenter interest rate in %";
	cin>>Rate;
	rate_d=Rate/100;
	interest=principal_amount*time*rate_d;
	total_amount=interest+principal_amount;
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"\nsimple interest of amount:"<<principal_amount<<" with interest rate:"<<Rate<<" for"<<time<<" is:"<<interest;
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"\nso your total amount is:"<<total_amount;
}

class compound
{
	public:
		float principal_amount1,rate_d1,interest1,Rate1,p1,p2,p3;
		int time1,n;
		void cinterest();
};

void compound::cinterest()
{
	cout<<"\nenter the amount:";
	cin>>principal_amount1;
	cout<<"\nenter time in years:";
	cin>>time1;
	cout<<"\nenter interest rate in %";
	cin>>Rate1;
	cout<<"\nenter number of time interes compounded in year";
	cin>>n;
	rate_d1=Rate1/100;
	p1=(1+(rate_d1/n));
	p2=n*time1;
	p3=pow(p1,p2);
	interest1=principal_amount1*p3;
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"\ncompound interest of amount:"<<principal_amount1<<" with interest rate:"<<Rate1<<" for"<<time1<<" is:"<<interest1<<" with total amount";
}

int main()
{
	char a;
	simple s1;
//	s1.sinterest();
	compound c1;
//	c1.cinterest();
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"\n the type of interest count";
	cout<<"\ns=simple & c=compound\n";
	cin>>a;
	cout<<"\n------------------------------------------------------------------------\n";
	switch(a)
	{
		case 's':
			s1.sinterest();
		break;
		
		case 'c':
			c1.cinterest();
		break;	
	}
	getch();
	return 0;
}

#include<iostream>
#include<conio.h>
#include<cmath>
#include<fstream>

using namespace std;


class simple
{
	public:
		float principal_amount,time,rate_d,interest,Rate,total_amount;
		void sinterest();
};

void simple::sinterest()
{
	cout<<"\n Enter the amount:";
	cin>>principal_amount;
	cout<<"\n Enter time in years:";
	cin>>time;
	cout<<"\n Enter interest rate in %";
	cin>>Rate;
	rate_d=Rate/100;
	interest=principal_amount*time*rate_d;
	total_amount=interest+principal_amount;
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\n Simple interest of amount:"<<principal_amount<<" with interest rate:"<<Rate<<" for"<<time<<" years is:"<<interest;
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\n So your total amount is:"<<total_amount;
	
	
	
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
	cout<<"\n Enter the amount:";
	cin>>principal_amount1;
	cout<<"\n Enter time in years:";
	cin>>time1;
	cout<<"\n Enter interest rate in %";
	cin>>Rate1;
	cout<<"\n Enter number of time interes compounded in year";
	cin>>n;
	rate_d1=Rate1/100;
	p1=(1+(rate_d1/n));
	p2=n*time1;
	p3=pow(p1,p2);
	interest1=principal_amount1*p3;
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\nCompound interest of amount:"<<principal_amount1<<" with interest rate:"<<Rate1<<" for "<<time1<<" years is:"<<interest1<<" with total amount";
}

int main()
{
	char a;
	simple s1;
	ofstream fout;
	compound c1;
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\n\t\t\tThe type of interest count";
	cout<<"\n\t\t\tS=simple & C=compound\n";
	cin>>a;
	cout<<"\n-------------------------------------------------------------------------------\n";
	
	fout.open("interest_cal.dat",ios::app);
	
	if(!fout)
	{
		cout<<"\t\t Error in opening a file.....!!!\n";
		getch();
		exit(1);
	}
	
	
	switch(a)
	{
		case 's':
			s1.sinterest();
			fout<<"-------------------------------------------------------------------------------\n";
			fout<<"Principal amount is:"<<s1.principal_amount<<"\n";
			fout<<"Interest rate in % is:"<<s1.Rate<<"\n";
			fout<<"Time  is:"<<s1.time<<"\n";
			fout<<"Interest  is:"<<s1.interest<<"\n";
			fout<<"Total amount is:"<<s1.total_amount<<"\n";
			fout<<"Type of interest is simple...";
			fout<<"\n-------------------------------------------------------------------------------\n";
	
		break;
		
		case 'c':
			c1.cinterest();
			fout<<"-------------------------------------------------------------------------------\n";
			fout<<"Principal amount is:"<<c1.principal_amount1<<"\n";
			fout<<"Interest rate in % is:"<<c1.Rate1<<"\n";
			fout<<"Time  is:"<<c1.time1<<"\n";
			fout<<"Interest  is:"<<c1.interest1<<"\n";
			fout<<"Number of time interes compounded in year"<<c1.n<<"\n";
			fout<<"Type of interest is compound...";
			fout<<"\n-------------------------------------------------------------------------------\n";
		break;	
	}
	
	fout.close();
	cout<<"\n-------------------------------------------------------------------------------\n";
	cout<<"\nYour calclulation is stored in text file named interest_cal";
	getch();
	return 0;
}

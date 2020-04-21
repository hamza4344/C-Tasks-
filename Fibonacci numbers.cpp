#include<iostream>
using namespace std;
int main()
{
	int green_curd,num_days;
	int first,second,third;
	int day;
	char ans;
	cout<<".........................WELCOME!...................................\n";
	do
	{
	cout<<"ENTER INITIAL SIZE OF GREEN CURD (IN POUNDS) : ";
	cin>>green_curd;
	cout<<"ENTER THE NUMBER OF DAYS : ";
	cin>>num_days;
	first=0;
	second=green_curd;
	third=second+first;
	
	for(day=1;day<=num_days;day++)
	{
	    if(day%5==0)
	{
		third=second+first;
		first=second;
		second=third;
	}	
	
	}
	cout<<"NUMBER OF POUNDS AFTER "<<num_days<<" DAYS IS : "<<third;
	cout<<"\nIF YOU WANT TO CONTINUE PRESS Y : ";
	cin>>ans;
		
	}while(ans=='Y');
	return(0);
	
}

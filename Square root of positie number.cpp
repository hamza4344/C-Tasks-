#include<iostream>
using namespace std;
int main()
{
	int num,i;
	double guess,r;
	cout<<"WELCOME! HERE WE CAN CALCULATE THE SQUARE ROOT OF POSITIVE NUMBER\n"
	<<"ENTER YOUR NUMBER : ";
	cin>>num;
	guess=num/2;
	for(i=1;i<=5;i++)
	{
	
	
	r=num/guess;
	guess=(guess+r)/2;
		
	}
	
	cout<<"SQUARE ROOT = ";
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<guess;
    return(0);
}

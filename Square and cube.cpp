#include<iostream>
using namespace std;
int main ()
{
	int j=2;
	int i=2;
	cout<<"THIS PROGRAM SHOWS SQUARE AND CUBE OF FIRST TEN EVEN NUMBERS.\n";

	while(j<=20)
	{
	cout<<"SQUARE OF "<<j<<" is "<<j*j<<endl;
	
	j=j+2;
	}
		while(i<=20)
	{
	cout<<"CUBE OF "<<i<<" is "<<i*i*i<<endl;
	
	i=i+2;
	}
	
	
	return (0);
}

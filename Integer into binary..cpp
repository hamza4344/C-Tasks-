#include<iostream>
using namespace std;
int main()
{
	int num;
    int rem,binary=0,i=1;
	cout<<"WELCOME! THIS PROGRAM CONVERT INTEGER INTO BINARY .\n"
	<<"ENTER THE INTEGER : ";
	cin>>num;

	while(num!=0)
	{
	rem=num%2;
	num=num/2;
	binary=binary+(rem*i);
	i=i*10;	
	}
	cout<<"BINARY EQUIVALENT = "<<binary;
        return(0);
}

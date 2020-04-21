#include<iostream>
using namespace std;
int main()
{
	int num,i,rem=0;
	cout<<"WELCOME! THIS PROGRAM CHECK WHETHER NUMBER IS PRIME OR NOT.\n"
	<<"ENTER THE  NUMBER : ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if (num%i==0)
		{
	     rem++;
		}
		
	}
	if(rem++==2)
	{
	     cout<<"NUMBER IS PRIME.";
	}
	else
	{
		cout<<"NUMBER IS NOT PRIME.";
	}
	return(0);
}

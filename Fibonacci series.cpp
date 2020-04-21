#include<iostream>
using namespace std;
int main()
{
	int first,second,third;
	int i=1;
	cout<<"WELCOME! THIS PROGRAM GENERATE A FIBONACCI UP TILL 200.\n ";
	first=0;
	second=1;
	third=second+first;
	cout<<third<<",";
	while(third<200)
	{

			
	third=second+first;

	first=second;
	second=third;
	if(third<=200)
    {
    cout<<third<<",";
	}
    
	}
	return(0);
	
}

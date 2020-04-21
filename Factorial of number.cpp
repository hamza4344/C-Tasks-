#include<iostream>
using namespace std;
int main()
{
	double num;
	double i;
	cout<<"WELCOME! THIS CALCCULATE THE FACTORILAL.\n"
	<<"ENTER THE NUMBER : ";
	cin>>num;
	for (i=num-1;i>0;i--)
	{
	
     num=num*i;
}
    cout<<"FACTORIAL IS : "<<num;
    return(0);

}

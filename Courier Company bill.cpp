#include<iostream>
using namespace std;
int main()
{
	int weight;
	char ans;
	int amount,i,to_amount;
cout<<"WELCOME! TO FAST COURIER \n"
<<"ENTER THE WEIGHT OF PARCE IN KG : ";
cin>>weight;
cout<<"FOR WITHIN THE CITY PRESS W FOR OUTSIDE PRESS O : ";
cin>>ans;
amount=0;
for(i=1;i<=weight;i++)
{
	
amount=amount+2;
}
if(ans=='W')
{
  to_amount=amount+20;
  cout<<"TOTAL AMOUNT TO PAY IS "<<to_amount<<"$";
}
else
{

  to_amount=amount+40;
  cout<<"TOTAL AMOUNT TO PAY IS "<<to_amount<<"$";
}
return(0);
}


























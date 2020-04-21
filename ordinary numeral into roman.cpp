#include<iostream>
using namespace std;
int main()
{
	int num;
	int k,l,m,n,o,p;
	char ans;
	cout<<"WELCOME!HERE WE CONVERT ORDINARY NUMERAL INTO ROMAN NUMERAL\n "
	<<"ENTER THE YEAR MUST BE FROM (1000-3000) : ";
	cin>>num;
	if ((num<1000)||(num>3000))
	{
	cout<<"YEAR IS WRONG SORRY : ";
	}
	else
	{
	cout<<"DO YOU WANT TO CONTINUE (YES=Y , NO=N) :";
	cin>>ans;
		
	
	while(ans=='Y')
	{
	cout<<"YOUR ANSWER IS : ";
	k=(num/1000);
	if(k==1)
	{
	cout<<"M";	
	}
    else if(k==2)
	{
	cout<<"MM";	
	}
	else if(k==3)
	{
	cout<<"MMM"	;
	}
	l=(num%1000);
	m=(l/100)*100;
    if(m==100)
	{
	cout<<"C";	
	}
	else if(m==200)
	{
	cout<<"CC";	
	}
	else if(m==300)
	{
	cout<<"CCC"	;
	}
    else if(m==400)
	{
	cout<<"CCCC";	
	}
	else if(m==500)
	{
	cout<<"D";	
	}
	else if(m==600)
	{
	cout<<"DC"	;
	}
	else if(m==700)
	{
	cout<<"DCC";	
	}
	else if(m==800)
	{
	cout<<"DCCC";	
	}
	else if(m==900)
	{
	cout<<"CM"	;
	}
	n=(l%100);
	o=(n/10)*10;
	if (n== 10)
    cout<<"X";
	else if (o== 20)
	{
	cout<<"XX";          
    }
	else if (o== 30)
	{
    cout<<"XXX";
	}
	else if (o== 40)
	{
	 cout<<"XL";
	}
	else if (o==50)
	{
	 cout<<"L";
	}
	else if (o== 60)
	{
	 cout<<"LX";
	}
	else if (o== 70)
	{

    cout<<"LXX";
	}
	else if (o==80)
	{
	
    cout<<"LXXX";
	}
	else if (o== 90)
	{
	
	cout<<"XC";
	}
	p=n%10;
     if (p == 1)
	cout<<"I";
	else if (p == 2)
    cout<<"II";
	else if (p == 3)
    cout<<"III";
	else if (p == 4)
	cout<<"IV";
	else if (p ==5)
    cout<<"V";
	else if (p== 6)
    cout<<"VI";
	else if (p == 7)
    cout<<"VII";
	else if (p ==8)
	cout<<"VIII";
	else if (p == 9)
	cout<<"IX";
	cout<<endl;
	cout<<"DO YOU WANT TO CONTINUE (YES=Y , NO=N) :";
	cin>>ans;	 
	
		 
	}
	cout<<"THANKS FOR USING THIS PROGRAM .";

   
}
	return(0);
	
	
     
	}

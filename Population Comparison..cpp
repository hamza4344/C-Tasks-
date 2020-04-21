#include<iostream>
using namespace std;
int main()
{
	int  town_a;
	double grow_a;
	int town_b;
	double grow_b;
	int i=0;
 cout<<"WELCOME! THIS PROGRAM COMPARE POPULATION OF TOWNS .\n"
     <<"ENTER POPULATION OF TOWN A : ";
 cin>>town_a;
 cout<<"ENTER GROWTH RATE OF TOWN A (IN %) : ";
 cin>>grow_a;
 cout<<"ENTER POPULATION OF TOWN B : ";
 cin>>town_b;
 cout<<"ENTER GROWTH RATE OF TOWN B (IN %) : ";
 cin>>grow_b;
  while(town_a<town_b)
  {
  	
  	town_a=(town_a)+((town_a*grow_a)/100);
 town_b=(town_b)+((town_b*grow_b)/100);
 i++;
  }
  cout<<endl<<"AFTER "<<i<<" YEARS POPULATION OF TOWN A IS GREATER THAN POPULATION OF TOWN B\n"
  <<endl<<"POPULATION OF TOWN A IS "<<town_a<<endl<<
  "\nPOPULATION OF TOWN B IS  "<<town_b;
  return(0); 	
  }

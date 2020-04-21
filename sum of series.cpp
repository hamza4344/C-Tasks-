#include<iostream>
using namespace std;
int main()
{
double i,num=1;
     cout<<"WELCOME! THIS PROGRAM SUM THE SERIES."
        <<"SERIES IS (1+1/2+.......+1/45)\n";

for(i=2;i<=45;i++)
{
	num=num+(1/i);
	}
	
	cout<<"SUM OF THE SERIES = "
	<<num;
	return(0);
	
	
}

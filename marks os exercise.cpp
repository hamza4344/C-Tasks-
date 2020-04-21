#include<iostream>
using namespace std;
int main()
{
	int num,i;
	int exer,marks;
	double total_exer=0,total_marks=0;
	double percent,to_percent;
	cout<<"WELCOME! HERE WE CALCULATE GRADE FOR CLASSROOM EXERCISES\n"
	<<"HOW MANY EXERCISES TO INPUT ? ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
	cout<<"Score received for exercise  "<<i<<":";
	cin>>exer;

	cout<<"Total point possible for exercise "<<i<<":";
	cin>>marks;

	total_exer=total_exer+exer;
	total_marks=total_marks+marks;
	}
	percent=(total_exer/total_marks);
	to_percent=percent*100;
	cout<<"YOUR TOTAL IS "<<total_exer<<" OUT OF "<<total_marks<<",or ";
		cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
    cout<<to_percent<<"%";
	
	return(0);
}


//WAP to find leap years from 2000 to 3000
#include<iostream>
using namespace std;
main()
{
	int n;
	
	cout<<"enter the year:";
	cin>>n ;
	
	if(n>=2000 && n<=3000)
	{
		if(n%4==0)
		{
			cout<<"\nlipe year .....!!";
		}
		else
		{
			cout<<"\nnot lipe year .....!!";
		}
	}
	else
	{
		cout<<"\nwe fond only 2000 to 3000....!!";
	}
}

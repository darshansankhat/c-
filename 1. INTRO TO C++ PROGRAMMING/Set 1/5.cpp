// WAP to find square root of given numbers from array elements.
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a[100],b[100],size;
	int i;
	
	cout<<"enter the size of array:";
	cin>>size;
	
	cout<<"\n\n >>>>>=== enter array eliment for square root ===<<<<<\n\n";
	
	for(i=0;i<size;i++)
	{
		cout<<i;
		cout<<"=";
		cin>>a[i];
		
		b[i]= sqrt(a[i]);
	}
	
	cout<<"\n\n >>>>>=== print array eliment square root ===<<<<<\n\n";
	
	for(i=0;i<size;i++)
	{		
		cout<<b[i];
		cout<<"\n";
	}
}

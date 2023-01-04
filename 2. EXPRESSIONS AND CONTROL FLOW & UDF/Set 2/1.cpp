//WAP to swap elements of two integer arrays using user define function
#include<iostream>
using namespace std;
void swap(int a[],int b[]);
main()
{	
	int a[100],b[100];

	swap(a,b);
}
void swap(int a[],int b[])
{
	int c[100];
	int i,n;
	
	cout<<"enter the size of array:";
	cin>>n;
	
	cout<<"\n\n>>>>>=== enter array 1 value ===<<<<<\n\n";
	
	for(i=0;i<n;i++)
	{
		cout<<i;
		cout<<"=";
		cin>>a[i];
	}
	
	cout<<"\n\n>>>>>=== enter array 2 value ===<<<<<\n\n";
	
	for(i=0;i<n;i++)
	{
		cout<<i;
		cout<<"=";
		cin>>b[i];
	}
	
	for(i=0;i<n;i++)
	{
		c[i]= a[i];
        a[i]= b[i];
        b[i]= c[i];
	}
	
	cout<<"\n\n>>>>>=== print array 1 value ===<<<<<\n\n";
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<"\n\n>>>>>=== print array 2 value ===<<<<<\n\n";
	
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<endl;
	}
}
	

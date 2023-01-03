//WAP to generate cube of given 5 numbers and make an array of that generated cubes.
#include<iostream>
using namespace std;
main()
{
	int a[100],b[100];
	int i,n=5,no;
	
//	cout<<"enter the size of array :";
//	cin>>n;
	
	cout<<"\n\n>>>>>== enter the only 5 element  ==<<<<<\n\n";
	
	for(i=0;i<n;i++)
	{
		cout<<i;
		cout<<"=";
		cin>>a[i];
	}
	
	cout<<"\n\n>>>>>== print array value ==<<<<<\n\n";
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i]*a[i]*a[i];
		
		cout<<b[i]<<endl;
	}
}

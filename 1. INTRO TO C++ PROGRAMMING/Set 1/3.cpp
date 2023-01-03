#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char n[100];
	int i,no;
	
	cout<<"enter the string for transfer:";
	cin>>n;
	
	no=strlen(n);
	
	for(i=0;i<no;i++)
	{
		if(n[i]>='A' && n[i]<='Z')
		{
			n[i]=n[i]+32;
		
			cout<<n[i];
		}
		else
		{
			n[i]=n[i]-32;
		
			cout<<n[i];
		}
	}
}

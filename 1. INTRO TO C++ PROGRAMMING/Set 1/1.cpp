//WAP to check given string is numeric or not.
#include<iostream>
using namespace std;
main()
{
	char arr[100];
	int i,count=0;
	
	cout<<"enter the string:";
	cin>>arr;
	
 	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>='0' && arr[i]<='9')
		{
			//dcout<<arr;
	
			count=0;
		}
		else if (arr[i]>='A' && arr[i]<='z')
		{
		//	cout<<"sting is not numeric";
			count=1;
		}
		
	}
	if(count==0)
	{
		cout<<"    string is numeric....!!";	
	}
	else
	{
		cout<<"    string is not numeric....!!";
	}
}
//

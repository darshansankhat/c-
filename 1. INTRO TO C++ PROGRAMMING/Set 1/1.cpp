#include<iostream>
using namespace std;
main()
{
	char arr[100];
	int i;
	
	cout<<"enter the string:";
	cin>>arr;
	
// 	for(i=0;arr[i]!='\0';i++)
//	{
		if(arr[i]>='A' && arr[i]<='Z' || arr[i]>='a' && arr[i]<='z')
		{
			cout<<arr;
			cout<<"    string is not numeric....!!";
		}
		else
		{
			cout<<arr;
			cout<<"    string is numeric....!!";
		}
	//}
}

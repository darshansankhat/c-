//WAP to create a class which have both static data member and static member function. That class gives details of all states in India.
#include<iostream>
using namespace std;
class details
{
	public :
		
		static void getter()
		{
			cout<<"\n\n>>>>>===  Gujarat  ===<<<<<\n\n";
			cout<<"Capital is Gandhinagar"<<endl;
			cout<<"Area is 1,96,244 km2"<<endl;
			cout<<"Population is 6,04,39,692"<<endl;
			
			cout<<"\n\n>>>>>===  Andhra Pradesh  ===<<<<<\n\n";
			cout<<"Capital is Amaravati"<<endl;
			cout<<"Area is 1,60,200 km2"<<endl;
			cout<<"Population is 49,386,799"<<endl;
			
			cout<<"\n\n>>>>>===  Arunachal Pradesh  ===<<<<<\n\n";
			cout<<"Capital is Itanagar"<<endl;
			cout<<"Area is 83743 km2"<<endl;
			cout<<"Population is 1,383,727"<<endl;
			
			cout<<"\n\n>>>>>===  Assam	===<<<<<\n\n";
			cout<<"Capital is Dispur"<<endl;
			cout<<"Area is 78438 km2"<<endl;
			cout<<"Population is 3,12,05,576"<<endl;
			
			cout<<"\n\n>>>>>===  Bihar	===<<<<<\n\n";
			cout<<"Capital is Patna"<<endl;
			cout<<"Area is 94163 km2"<<endl;
			cout<<"Population is 10,40,99,452"<<endl;
			
			cout<<"\n\n>>>>>===  Chhattisgarh	===<<<<<\n\n";
			cout<<"Capital is Naya Raipur"<<endl;
			cout<<"Area is 1,35,192 km2"<<endl;
			cout<<"Population is 2,55,45,198"<<endl;
			
			cout<<"\n\n>>>>>===  Goa  ===<<<<<\n\n";
			cout<<"Capital is Panaji"<<endl;
			cout<<"Area is 3702 km2"<<endl;
			cout<<"Population is 14,58,545"<<endl;
			
			cout<<"\n\n>>>>>===  Haryana  ===<<<<<\n\n";
			cout<<"Capital is Chandigarh"<<endl;
			cout<<"Area is 44212 km2"<<endl;
			cout<<"Population is 2,53,51,462"<<endl;
			
			cout<<"\n\n>>>>>===  Himachal Pradesh  ===<<<<<\n\n";
			cout<<"Capital is Shimla"<<endl;
			cout<<"Area is 55673 km2"<<endl;
			cout<<"Population is 68,64,602"<<endl;
			
			cout<<"\n\n>>>>>===  Jharkhand	===<<<<<\n\n";
			cout<<"Capital is Ranchi"<<endl;
			cout<<"Area is 79716 km2"<<endl;
			cout<<"Population is 3,29,88,134"<<endl;
			
			cout<<"\n\n>>>>>===  Karnataka	===<<<<<\n\n";
			cout<<"Capital is Bangalore"<<endl;
			cout<<"Area is 1,91,791 km2"<<endl;
			cout<<"Population is 6,10,95,297"<<endl;
			
			cout<<"\n\n>>>>>===  Kerala  ===<<<<<\n\n";
			cout<<"Capital is Thiruvananthapuram"<<endl;
			cout<<"Area is 38852 km2"<<endl;
			cout<<"Population is 3,34,06,061"<<endl;
			
			cout<<"\n\n>>>>>===  Maharashtra  ===<<<<<\n\n";
			cout<<"Capital is Mumbai"<<endl;
			cout<<"Area is 3,07,713 km2"<<endl;
			cout<<"Population is 11,23,74,333"<<endl;
			
			cout<<"\n\n>>>>>===  Uttar Pradesh  ===<<<<<\n\n";
			cout<<"Capital is Lucknow"<<endl;
			cout<<"Area is 2,40,928 km2"<<endl;
			cout<<"Population is 19,98,12,341"<<endl;
		}
};
main()
{
	details::getter();
}

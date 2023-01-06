#include<iostream>
using namespace std;
class time
{
	public :
		
		int s,h,m;
		int sa,sh,sm;
		
		void enterdata()
		{
			cout<<"\n=====enter 1 data=====\n\n";
			//cout<<"\n=====enter second=====\n\n";
			cout<<"enter the second:";
			cin>>s;
			//cout<<"\n=====enter minit=====\n\n";
			cout<<"enter the minit:";
			cin>>m;
			//cout<<"\n=====enter hour=====\n\n";
			cout<<"enter the hour:";
			cin>>h;
		}
		void ans(time t2)
		{
			cout<<"\n=====  ans  =====\n\n";
			
			time t3;
			
			t3.s=s+t2.s;
			t3.m=m+t2.m;
			t3.h=h+t2.h;
			
			t3.m=t3.m+(t3.s/60);
			t3.s=t3.s-((t3.s/60)*60);
			
			t3.h=t3.h+(t3.m/60);
			t3.m=t3.m-((t3.m/60)*60);
			
			cout<<"(HH:"<<t3.h<<"  MM:"<<t3.m<<"  SS:"<<t3.s<<")"<<endl;			
		}
};
main()
{
	time t1,t2;
	t1.enterdata();
	t2.enterdata();
	
	t1.ans(t2);
}

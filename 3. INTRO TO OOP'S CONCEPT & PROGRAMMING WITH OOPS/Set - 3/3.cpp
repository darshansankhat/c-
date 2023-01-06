#include<iostream>
using namespace std;
class time
{
	public :
		
		int s,h,m;
		
		void enterdata()
		{
			cout<<"\n=====enter only second=====\n\n";
			cout<<"enter the second:";
			cin>>s;
		}
		
		void ans(time t2)
		{
			cout<<"\n=====  ans  =====\n\n";
			
			time t3;
			
			t2.m=s/60;
			s=s-((s/60)*60);	
			t3.h=t2.m/60;
			t2.m=t2.m-((t2.m/60)*60);
			t3.h=t3.h+((t2.m/60));
			
			cout<<"("<<t3.h<<":"<<t2.m<<":"<<s<<")"<<endl;			
		}
};
main()
{
	time t1,t2;
	t1.enterdata();
	
	t1.ans(t2);
}

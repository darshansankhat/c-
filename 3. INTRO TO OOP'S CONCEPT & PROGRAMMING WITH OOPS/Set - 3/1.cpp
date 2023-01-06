#include<iostream>
using namespace std;
class distanc
{
	public :
		
		int i,f;
		
		void enterdata()
		{
			cout<<"\n=====enter 1 data=====\n\n";
			cout<<"enter the feet:";
			cin>>f;
			cout<<"enter the inch:";
			cin>>i;
		}
		
		void ans(distanc d2)
		{
			cout<<"\n=====  ans  =====\n\n";
			
			distanc d3;
			
			d3.f=f+d2.f;
			d3.i=i+d2.i;
			
			d3.f=(d3.f+(d3.i/12));
			d3.i=d3.i-((d3.i/12)*12);
			
			cout<<"feet :"<<d3.f<<endl<<"inch :"<<d3.i<<endl;
			
		}
};
main()
{
	distanc d1,d2;
	d1.enterdata();
	d2.enterdata();
	
	d1.ans(d2);
}

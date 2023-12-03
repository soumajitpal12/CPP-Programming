#include<iostream>
using namespace std;
class time {
	int hr, min, sec;
	public:
		void read_time()
		{
			cout<<"Enter Hour, Minute & Sec : ";
			cin>>hr>>min>>sec;
		}
		void show_time()
		{
			cout<<"\nTime is "<<hr<<":"<<min<<":"<<sec<<endl;
		}
		void conversion()
		{
			min = min+sec/60;
			sec = sec%60;
			hr = hr+min/60;
			min =min%60;
		}
		
		time operator +(time t){
			time temp;
			temp.hr= hr+t.hr;
			temp.min= min+t.min;
			temp.sec= sec+t.sec;
			temp.conversion();
			return temp;
		}
};

int main()
{
	time t1,t2,t3;
	t1.read_time();
	t2.read_time();
	t1.show_time();
	t2.show_time();
	
	cout<<"\n Adding the two timestamps we get new timestam as::";
	t3=t1+t2;
	t3.show_time();
	return 0;
}

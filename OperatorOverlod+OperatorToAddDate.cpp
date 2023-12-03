#include<iostream>
using namespace std;
class time {
	int year, month, day;
	public:
		void read_time()
		{
			cout<<"Enter day, month & year : ";
			cin>>day>>month>>year;
		}
		void show_time()
		{
			cout<<"\nDate is "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		void conversion()
		{
			month = month+day/30;
			day = day%30;
			year = year+month/12;
			month =month%12;
		}
		
		time operator +(time t){
			time temp;
			temp.year= year+t.year;
			temp.month= month+t.month;
			temp.day= day+t.day;
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
	
	cout<<"\n Adding the two dates we get new date as::";
	t3=t1+t2;
	t3.show_time();
	return 0;
}


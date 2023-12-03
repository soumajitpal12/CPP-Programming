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
		void birth_Date()
		{
			cout<<"\n Enter BirthDate: ";
			cin>>day>>month>>year;
		}
		void show_time()
		{
			cout<<"\n\nDate is "<<day<<"/"<<month<<"/"<<year<<endl;
			
			cout<<year<<endl;
			
		}
		void conversion()
		{
			month = month+day/30;
			day = day%30;
			year = year+month/12;
			month =month%12;
		}
		
		time operator -(time t){
			time temp;
			temp.year= year-t.year;
			temp.month= t.month-month;
			temp.day= day-t.day;
			temp.conversion();
			return temp;
		}
};

int main()
{
	time t1,t2,t3;
	t1.read_time();
	t2.birth_Date();
	t1.show_time();
	t2.show_time();
	
	cout<<"\n Age of student::";
	t3=t1-t2;
	t3.show_time();
	return 0;
}


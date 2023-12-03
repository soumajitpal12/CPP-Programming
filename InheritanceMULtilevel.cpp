#include<iostream>
class student_info
{
int roll_no,college_id,reg_no;
	char s_name[30];
public:
      void read_info()
      {
	cout<<"Enter student name :";
	gets(s_name);
	cout<<"roll no , college id , reg no :";
	cin>>roll_no>>college_id>>reg_no;
      }
      void display()
      {
	cout<<"\nStudent info are -"<<endl;
	cout<<"\nNAME : "<<s_name<<"\nROLL : "<<roll_no<<"\nCOLLEGE ID : "<<college_id<<"\nREG NO. : "<<reg_no<<endl;
      }
};
class sem1 : public student_info
{
protected:float sub1,sub2,sub3,total1,avg1;
public:
	void read_marks1()
	{
		cout<<"\nEnter sub1 , sub2 , sub3 marks(First sem) :";
		cin>>sub1>>sub2>>sub3;
	}
	void display1()
	{
			total1=sub1+sub2+sub3;
			avg1=total1/3.0;
		cout<<"\n Marks Obtained in first sem  ="<<total1;
		cout<<"\n Average in first sem ="<<avg1;
	}
};
class sem2 : public sem1
{
	float sub4,sub5,sub6,total2,avg2,total_avg1;
public:
	void read_marks2()
	{
	cout<<"\nEnter sub4 , sub5 , sub6 marks(Second sem) :";
		cin>>sub4>>sub5>>sub6;
	}
	void display2()
	{
			total2=sub4+sub5+sub6;
			avg2=total2/3.0;
			total_avg1=(avg1+avg2)/2.0;
		cout<<"\n Marks Obtained in second sem ="<<total2;
		cout<<"\n Average in second sem ="<<avg2;
		cout<<"\n Total average in first year ="<<total_avg1;
	}
};
class scholarship
{
protected: char sc_name[50];
	   float s_amount;
public:
	void read()
	{
		cout<<"\nEnter the scholarship name : ";
		gets(sc_name);
		cout<<"\nEnter the scholarship amount :";
		cin>>s_amount;
	}
	void show()
	{
		cout<<"\nScholarship awarded "<<sc_name;
		cout<<"\nReward recived "<<s_amount;
	}
};
class all_info :public sem2,public scholarship
{
public :
	void total_input()
	{
		read_info();
		read_marks1();
		read_marks2();
		read();
	}
	void total_display()
	{
	display();
	display1();
	display2();
	show();
	}
};
int main()
{
clrscr();
all_info obj;
obj.total_input();
obj.total_display();
return 0;
}


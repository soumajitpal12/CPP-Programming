#include<iostream>
using namespace std;
class base{
	public:
	virtual void print()
	{
		cout<<"\nPrint base class\n";
		
	}
	void show()
	{
		cout<<"base class\n";
		
	}
};
class derived : public base
{
	public : void print()
	{
		cout<<"Print derived class\n";
		
	}
	void show()
	{
		cout<<"Derived class\n";
	}
};

int main()
{
	base*bptr;
	derived d;
	bptr=&d;
	bptr->print();
	bptr->show();
	return 0;
}

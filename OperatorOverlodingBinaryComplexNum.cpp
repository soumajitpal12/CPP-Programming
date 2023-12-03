#include<iostream>
using namespace std;

class Complex
{
    int real, img;
 
 public:
//    void readdata();
//    void display();
    void operator+(Complex cobj)
    {
        real = real + cobj.real;
        img = img + cobj.img;
        cout<<"Result= "<<endl;
        cout<<real<<"+i"<<img<<endl; 	
    }	
};

void Complex readdata()
{
    cout<<"Enter the value for Complex Number (a + bi): ";
    cin>>real>>img;
}

void Complex::display()
{
    cout<<"Number is: "<<endl;
    cout<<real<<"+i"<<img<<endl;
}

int main()
{
    Complex c1, c2;
    cout<<"Enter the value for 1st Complex Number: ";
    c1.readdata();
    cout<<"Enter the value for 2nd Complex Number: ";
    c2.readdata();
    cout<<"Numbers are: "<<endl;
    c1.display();
    c2.display();
    c1 + c2;
    return 0;
}


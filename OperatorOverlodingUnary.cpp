#include<iostream>
using namespace std;

class ABC{
private:
    int a,b,c,d;
public:
    void read()
    {
        cout<<"Enter the Values: ";
        cin>>a>>b>>c>>d;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
   
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
        d = -d;
    }
};

int main()
{
    ABC obj;
    obj.read();
    cout<<"Before Change:\n";
    obj.display();
    -obj;
    cout<<"After Change:\n";
    obj.display();
    return 0;
}


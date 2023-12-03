#include<iostream>
using namespace std;
class sample
{
int len,br;
public:
sample()
{
len=10;
br=20;
}
sample(int l,int b)
{
len=l;
br=b;
}
sample(sample &obj)
{
len=obj.len;
br=obj.br;
}
int area()
{
cout<<"Area= "<<len*br<<endl;
}
int perimeter()
{
cout<<"Perimeter= "<<2*(len+br)<<endl;
}
};
int main()
{
sample s1,s2(30,40),s3(s2);
s1.area();
s2.area();
s3.area();
s1.perimeter();
s2.perimeter();
s3.perimeter();
return 0;
}

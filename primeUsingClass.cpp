#include<iostream>
using namespace std;
class prime
{
	int n,a=0,i;
	public:
		void inputdata(){
			cout<<"Enter n:"<<endl;
			cin>>n;
		}
		void calculation(){
			for(i=2;i<n/2;i++){
				if(n%i==0){
					a=1;
					cout<<"Number is not prime";
					break;
				}
			}
			if(a==0){
				cout<<"Number is prime";
			}
}
};
int main(){
	prime p;
	p.inputdata();
	p.calculation();
	return 0;
}

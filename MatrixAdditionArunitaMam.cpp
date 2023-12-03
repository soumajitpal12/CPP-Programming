#include<iostream>
using namespace std;

class Matrix
{
	int a[20][20], row, col;
	public:
		void get_data(int r, int c)
		{
			int i, j;
			row=r;
			col=c;
			for(i=0;i<row;i++)
			  for(j=0;j<col;j++)
			    cin>>a[i][j];
		}
		
		void addition(Matrix m1, Matrix m2) // "Matrix" should be capitalized to match the class name
		{
			int i,j;
			row = m1.row;
			col = m1.col;
			for(i=0;i<row;i++)
			  for(j=0;j<col;j++)
			    a[i][j] = m1.a[i][j] + m2.a[i][j]; // should be m1.a[i][j] and m2.a[i][j] instead of a[i][j] + a[i][j]
		}
		
		void display()
		{
			int i,j;
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++) // added a loop to display elements in each row on separate lines
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
		}
};

int main()
{
	int r1,c1,r2,c2;
	Matrix m1,m2,m3;
	cout<<"\n Enter row & Col of 1st Matrix: ";
	cin>>r1>>c1;
	cout<<"\n Enter row & col of 2nd matrix: "; // fixed a typo
	cin>>r2>>c2;
	if(r1==r2 && c1== c2)
	{
		cout<<"\n Enter elements of 1st matrix: ";
		m1.get_data(r1,c1);
		
		cout<<"\n Enter elements of 2nd matrix: ";
		m2.get_data(r2,c2);
		
		m3.addition(m1,m2);
		
		cout<<"\n Matrix Addition is : \n";
		m3.display();	
	}
	
	else 
	{
		cout<<"Input Error";
	}
	
	return 0;
}


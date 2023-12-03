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
        
        void multiplication(Matrix m1, Matrix m2)
        {
            int i,j,k;
            row = m1.row;
            col = m2.col;
            for(i=0;i<row;i++)
              for(j=0;j<col;j++)
              {
                  a[i][j] = 0;
                  for(k=0;k<m1.col;k++) // m1.col should be used for the number of columns in the first matrix
                    a[i][j] += m1.a[i][k] * m2.a[k][j];
              }
        }
        
        void display()
        {
            int i,j;
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
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
    cout<<"\n Enter row & col of 2nd matrix: ";
    cin>>r2>>c2;
    if(c1 == r2) // check if the dimensions are compatible for multiplication
    {
        cout<<"\n Enter elements of 1st matrix: ";
        m1.get_data(r1,c1);
        
        cout<<"\n Enter elements of 2nd matrix: ";
        m2.get_data(r2,c2);
        
        m3.multiplication(m1,m2);
        
        cout<<"\n Matrix Multiplication is : \n";
        m3.display();    
    }
    
    else 
    {
        cout<<"Input Error";
    }
    
    return 0;
}


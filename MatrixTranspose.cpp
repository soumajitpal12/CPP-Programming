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
        
        void transpose(Matrix m1) // added a new function to transpose the matrix
        {
            int i,j;
            row = m1.col; // swapped row and col
            col = m1.row;
            for(i=0;i<row;i++)
              for(j=0;j<col;j++)
                a[i][j] = m1.a[j][i]; // swapped indices
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
    int r1,c1;
    Matrix m1,m2,m3;
    cout<<"\n Enter row & Col of Matrix: ";
    cin>>r1>>c1;
    
    cout<<"\n Enter elements of matrix: ";
        m1.get_data(r1,c1);
        
    cout<<"\nThe Matrix is: \n";
    m1.display();
        
        cout<<"\n Transpose of the matrix is : \n";
        m3.transpose(m1); // calling the transpose function
        
        m3.display();   

    return 0;
}

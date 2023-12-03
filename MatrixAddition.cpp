#include<iostream>
using namespace std;
class Add
{
  public:
    void sum(int r,int c)
    {
      int m1[r][c],m2[r][c],s[r][c];
      cout<<"\nEnter the elements of  First matrix: ";
      for(int i=0;i<r;i++)
      {
        for (int j=0;j<c;j++)
        {
          cin>>m1[i][j];
        }
      }
      cout<<"\nEnter the elements of Second matrix: ";
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
           cin>>m2[i][j];
        }
      }
      cout<<"Output: "<<endl;
      for (int i=0;i<r;i++)
      {
        for (int j=0;j<c;j++)
        {
           s[i][j]=m1[i][j]+m2[i][j];
           cout<<s[i][j]<< "\t";
        }
        cout<<endl;
      }
    }
};
int main()
{
  int row,col;
  cout<<"\nEnter the number of rows: ";
  cin>>row;
  cout<<"\nEnter the number of column: ";
  cin>>col;
  Add obj;
  obj.sum(row, col);
  return 0;
}
//To download raw file Click Here
//Output
//Enter the number of rows: 2
//Enter the number of column: 2
//Enter the elements of  First matrix: 1
//2
//3
//4
//Enter the elements of Second matrix: 5
//6
//7
//8
//Output: 6 8 10 12

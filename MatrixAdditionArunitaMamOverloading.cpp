#include <iostream>
using namespace std;

class Matrix {
    int a[20][20], row, col;
public:

    void get_data(int r, int c) {
        int i, j;
        row=r;
        col=c;
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                cin >> a[i][j];
    }
    Matrix operator+(Matrix m) 
    {
        Matrix result;
        result.row = row;
        result.col=col;
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                result.a[i][j] = a[i][j] + m.a[i][j];
        return result;
    }
    void display() {
        int i, j;
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    int r1, c1, r2, c2;
    cout << "\n Enter row & Col of 1st Matrix: ";
    cin >> r1 >> c1;
    cout << "\n Enter row & col of 2nd matrix: ";
    cin >> r2 >> c2;
    if (r1 == r2 && c1 == c2) {
        Matrix m1, m2, m3;
        cout << "\n Enter elements of 1st matrix: ";
        m1.get_data(r1,r2);
        cout << "\n Enter elements of 2nd matrix: ";
        m2.get_data(r2,c2);
        m3 = m1 + m2;
        cout << "\n Matrix Addition is : \n";
        m3.display();
    } else {
        cout << "Input Error";
    }
    return 0;
}


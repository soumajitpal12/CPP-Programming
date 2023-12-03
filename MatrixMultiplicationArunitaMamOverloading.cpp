#include <iostream>

using namespace std;

class Matrix {
    int a[20][20], row, col;
public:
    void get_data(int r,int c) {
    	row= r;
    	col=c;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> a[i][j];
            }
        }
    }
    Matrix operator*(Matrix m) {
        Matrix result;
        result.row = row;
        result.col = col;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result.a[i][j] = 0;
                for (int k = 0; k < col; k++) {
                    result.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return result;
    }
    void display() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int r1, c1, r2, c2;
    cout << "\nEnter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    cout << "\nEnter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;
    if (c1 == r2) {
        Matrix m1, m2, m3;
        cout << "\nEnter the elements of the first matrix: ";
        m1.get_data(r1,c1);
        cout << "\nEnter the elements of the second matrix: ";
        m2.get_data(r2,c2);
        m3 = m1 * m2;
        cout << "\nThe result of matrix multiplication is:\n";
        m3.display();
    } else {
        cout << "\nInput Error: The number of columns of the first matrix should be equal to the number of rows of the second matrix.\n";
    }
    return 0;
}


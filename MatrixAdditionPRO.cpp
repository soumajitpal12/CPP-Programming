#include <iostream>

using namespace std;

class Matrix {
    private:
        int row, col;
        int first[10][10], second[10][10], sum[10][10];

    public:
        Matrix() {
            row = 0;
            col = 0;
            for(int i=0; i<10; i++) {
                for(int j=0; j<10; j++) {
                    first[i][j] = 0;
                    second[i][j] = 0;
                    sum[i][j] = 0;
                }
            }
        }

        void get_dimensions() {
            cout << "Enter the number of rows and columns of 1st matrix: ";
            cin >> row >> col;
        }

        void input_matrices() {
            cout << "Enter the elements of first matrix:\n";

            for(int i=0; i<row; i++) {
                for(int j=0; j<col; j++) {
                    cin >> first[i][j];
                }
            }

            cout << "Enter the elements of second matrix:\n";

            for(int i=0; i<row; i++) {
                for(int j=0; j<col; j++) {
                    cin >> second[i][j];
                }
            }
        }

        bool check_addition() {
            if(row == 0 || col == 0) {
                cout << "Please enter matrix dimensions first!\n";
                return false;
            }

            if(row != col) {
                cout << "Addition is not possible\n";
                return false;
            }

            return true;
        }

        void add_matrices() {
            cout << "Sum of entered matrices:\n";

            for(int i=0; i<row; i++) {
                for(int j=0; j<col; j++) {
                    sum[i][j] = first[i][j] + second[i][j];
                    cout << sum[i][j] << "\t";
                }
                cout << endl;
            }
        }
};

int main() {
    Matrix mat;

    mat.get_dimensions();
  
     mat.input_matrices();

    if(mat.check_addition()) {
        mat.add_matrices();
    }

    return 0;
}


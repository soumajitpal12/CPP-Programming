#include <iostream>
using namespace std;

class Matrix {
    private:
        int rows, cols;
        int matrix[10][10];
    public:
        void read_matrix() {
            cout << "Enter the number of rows and columns: ";
            cin >> rows >> cols;
            cout << "Enter the elements of the matrix: " << endl;
            for(int i=0; i<rows; i++) {
                for(int j=0; j<cols; j++) {
                    cin >> matrix[i][j];
                }
            }
        }
        void display_matrix() {
            for(int i=0; i<rows; i++) {
                for(int j=0; j<cols; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }
        
        bool check_addition() {
            if(rows == 0 || cols == 0) {
                cout << "Please enter matrix dimensions first!\n";
                return false;
            }

            if(rows != cols) {
                cout << "Addition is not possible\n";
                return false;
            }

            return true;
        }

        Matrix add_matrices(Matrix m2) {
            Matrix result;
            result.rows = rows;
            result.cols = cols;
            for(int i=0; i<rows; i++) {
                for(int j=0; j<cols; j++) {
                    result.matrix[i][j] = matrix[i][j] + m2.matrix[i][j];
                }
            }
            return result;
        }
};

int main() {
    Matrix m1, m2, sum;
    m1.read_matrix();
    m2.read_matrix();
    sum = m1.add_matrices(m2);
    cout << "The first matrix is: " << endl;
    m1.display_matrix();
    cout << "The second matrix is: " << endl;
    m2.display_matrix();
    cout << "The sum of the matrices is: " << endl;
     if(sum.check_addition()){
     
     sum.display_matrix(); }
    return 0;
}

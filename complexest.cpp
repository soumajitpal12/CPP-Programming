#include <iostream>
using namespace std;

class complex
{
   public :
      int real, img;
};

void getInput(int a, int b)
{
    cout << "Enter the real part: ";
    cin >> a;
    cout << "Enter the imaginary part: ";
    cin >> b;
}

int main()
{
   complex a, b, c;

   cout << "Enter a and b where a + ib is the first complex number." << endl;
   getInput(a, b);

   cout << "Enter c and d where c + id is the second complex number." << endl;
   getInput(b);

   c.real = a.real * b.real;
   c.img = a.img * b.img;

   cout << "Multiply of two complex numbers = " << c.real << " + " << c.img << "i";
   
   return 0;
}

/*. Write a C++ program to convert Complex type to Primitive type.
 Example -
 int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 x=c1;
 return 0;
}
*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex() {}
    Complex(int x, int y)
    {
        real = x, img = y;
    }
    void Display()
    {
        cout << "Real = " << real << "   img = " << img << endl;
    }
    operator int()
    {
        return real + img;
    }
};
int main()
{
    Complex c1(2, 3);
    int x = c1;
    cout << "x =  " << x << endl;
    return 0;
}

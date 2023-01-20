/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}
*/
#include <iostream>
using namespace std;
class Product
{
private:
    int A, B;

public:
    void SetData(int x, int y)
    {
        A = x, B = y;
    }
    int GetterForFirst()
    {
        return A;
    }
    int GetterForSecond()
    {
        return B;
    }
    void Display()
    {
        cout << "FirstProduct = " << A << "    SecondProduct = " << B << endl;
    }
};
class Item
{
private:
    int X, Y;

public:
    Item() {}
    void Display()
    {
        cout << "First Item = " << X << " Second Item = " << Y << endl;
    }
    Item(Product p)
    {
        X = p.GetterForFirst();
        Y = p.GetterForFirst();
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.SetData(3, 4);
    p1.Display();
    i1 = p1;
    i1.Display();
    return 0;
}

/*
Create a Product class and convert Product type to Item type using constructor
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
};
class Item
{
private:
    int X, Y;

public:
    Item(Product p)
    {
        X = p.GetterForFirst(), Y = p.GetterForSecond();
    }
    Item() {}
    void Display()
    {
        cout << "First Item = " << X << " Second Item = " << Y << endl;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.SetData(3, 4);
    i1 = p1;
    i1.Display();
    return 0;
}

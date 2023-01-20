/*. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
 Invent1 s1=(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}
*/
#include <iostream>
using namespace std;
class Invent1
{
private:
    int x, y;

public:
    Invent1() {}
    Invent1(int a, int b)
    {
        x = a, y = b;
    }
    operator float()
    {
        return x + y;
    }
    int GetterFOrFirst()
    {
        return x;
    }
    int GetterForSecond()
    {
        return y;
    }
};
class Invent2
{
private:
    int x, y;

public:
    Invent2(){};
    Invent2(Invent1 i)
    {
        x = i.GetterFOrFirst(), y = i.GetterForSecond();
    }
    void Display()
    {
        cout << "x = " << x << "   y = " << y << endl;
    }
};
int main()
{
    Invent1 s1 = Invent1(4, 5);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    d1.Display();
    return 0;
}

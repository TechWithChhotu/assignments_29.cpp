/*Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1 // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
*/
#include <iostream>
using namespace std;
class Time
{
private:
    int H, M;

public:
    Time(int x, int y)
    {
        H = x, M = y;
    }
    void Setter(int x, int y)
    {
        H = x, M = y;
    }
    int Getter()
    {
        return (H * 60 + M);
    }
    void Display()
    {
        cout << "HH : MM = " << H << " : " << M << endl;
    }
};
class Minute
{
private:
    int M;

public:
    void Setter(int x)
    {
        M = x;
    }
    int Getter()
    {
        return M;
    }
    void Display()
    {
        cout << "Minutes =  " << M << endl;
    }
    Minute() {}
    Minute(Time t)
    {
        M = t.Getter();
    }
};
int main()
{
    Time t1(2, 30);
    t1.Display();
    Minute m1;
    m1.Display();
    m1 = t1; // Fetch minute from time
    t1.Display();
    m1.Display();
    return 0;
}

/*Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example:-
int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}
*/
#include <iostream>
using namespace std;
class Rupee
{
    float R;

public:
    void Display()
    {
        cout << "Rupees = " << R << endl;
    }
    Rupee(float x)
    {
        R = x;
    }
    int getter() { return R; }
};
class Dollar
{
    float D;

public:
    void Display()
    {
        cout << "Dollor = " << D << endl;
    }
    Dollar() {}
    Dollar(Rupee t)
    {
        D = t.getter() / 81.26;
    }
    operator Rupee()
    {
        return D * 81.26;
    }
};
int main()
{
    Rupee R1 = 500;
    R1.Display();

    Dollar D1;
    D1 = R1;
    D1.Display();

    R1 = D1;
    R1.Display();

    return 0;
}

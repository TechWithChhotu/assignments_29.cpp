/*
8. Create a Rupee class and convert it into int. And Display it.
Example:-
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
}
*/
#include <iostream>
using namespace std;
class Rupee
{
    int R;

public:
    Rupee(int x)
    {
        R = x;
    }
    operator int()
    {
        return R;
    }
};
int main()
{
    Rupee r = 10;
    int x = r;
    cout << x;
    return 0;
}

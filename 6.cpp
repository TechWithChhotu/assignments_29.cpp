/*Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.
Example:-
int main()
{
 int duration;
 cout<<”Enter time duration in minutes”;
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}
*/
#include <iostream>
using namespace std;
class Time
{
private:
    int S;

public:
    Time(int d)
    {
        S = d * 60;
    }
    void Display()
    {
        cout << "Duration in second " << S << endl;
    }
};
int main()
{
    int duration;
    cout << "Enter time duration in minutes ";
    cin >> duration;
    Time t1 = duration;
    t1.Display();
    return 0;
}

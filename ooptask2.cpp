#include <iostream>
using namespace std;

class Circle
{

private:
    double radius;

public:
    void setValue()
    {
        cout << "The radius of the circle: ";
        cin>>radius;
    }
    void printArea()
    {
        area=3.14*radius*radius;
    }
};
int main()
{

    return 0;
}
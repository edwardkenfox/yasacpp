#include <iostream>
using namespace std;

class Point {
    private: 
        int x;
        int y;
    public:
        void setX(int a);
        void setY(int b);
        int getX() { return x; };
        int getY() { return y; };
};

void Point::setX(int a)
{
    if (a >= 0 && a <= 10) {
        x = a;
    } else {
        cout << "Invalid argument, using default value of 0" << endl;
        x = 0;
    }
}
void Point::setY(int b)
{
    if (b >= 0 && b <= 10) {
        y = b;
    } else {
        cout << "Invalid argument, using default value of 0" << endl;
        y = 0;
    }
}

int main()
{
    Point p;
    int ix;
    int iy;

    cout << "Input x" << endl;
    cin >> ix;
    p.setX(ix);

    cout << "Input y" << endl;
    cin >> iy;
    p.setY(iy);

    cout << "The coordinate is (" << p.getX() << ", " << p.getY() << ")" << endl;

    return 0; 
}

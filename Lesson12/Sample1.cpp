#include <iostream>
using namespace std;

class Car {
    public:
        int num;
        double gas;
        void show();
};

void Car::show()
{
    cout << "Number is " << num << endl;
    cout << "Gas is " << gas << endl;
}

int main()
{
    Car car1;

    car1.num = 1234;
    car1.gas = 20.5;

    car1.show();

    return 0;
}
#include <iostream>
using namespace std;

class Car {
    private: 
        int num;
        double gas;
    public:
        Car();
        void show();
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "Creatd a car." << endl;
}

void Car::show() 
{
    cout << "Number is " << num << endl;
    cout << "Gas is " << gas << endl;
}

int main()
{
    Car car1;

    car1.show();

    return 0;
}
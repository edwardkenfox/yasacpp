#include <iostream>
using namespace std;

struct Car {
    int num;
    double gas;
};

void show(Car c);

int main()
{
    Car car1 = {0, 0.0};

    cout << "Input the number" << endl;
    cin >> car1.num;

    cout << "Input the gas" << endl;
    cin >> car1.gas;

    show(car1);

    return 0;
}

void show(Car c) 
{
    cout << "The number is " << c.num << " and the gas is " << c.gas << endl;
}
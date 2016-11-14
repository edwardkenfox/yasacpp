#include <iostream>
using namespace std;

struct Car {
    int num;
    double gas;
};

void show(Car* pC);

int main()
{
    Car car1 = {0, 0.0};

    cout << "Input the number" << endl;
    cin >> car1.num;

    cout << "Input the gas" << endl;
    cin >> car1.gas;

    show(&car1);

    return 0;
}

void show(Car* pC) 
{
    cout << "The number is " << pC->num << " and the gas is " << pC->gas << endl;
}
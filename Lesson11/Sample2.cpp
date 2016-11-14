#include <iostream>
using namespace std;

struct Car {
    int num;
    double gas;
};

int main()
{
    Car car1;

    cout << "Input the number" << endl;
    cin >> car1.num;

    cout << "Input the gas" << endl;
    cin >> car1.gas;

    cout << "Numer is " << car1.num << " and the gas is " << car1.gas << endl;

    return 0;
}
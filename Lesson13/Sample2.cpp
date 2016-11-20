#include <iostream>
using namespace std;

class Car {
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void show();
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "Constructor 1" << endl;
}
Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "Constructor 2 with number " << num << " and gas " << gas << endl;
}
void Car::show() 
{
    cout << "Number is " << num << " and gas is " << gas << endl;
}

int main()
{
    Car car1;
    Car car2(1234, 20.5);

    return 0;
}
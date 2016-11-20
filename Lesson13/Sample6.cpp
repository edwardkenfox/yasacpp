#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        static int sum;
        Car();
        void setCar(int n, double g);
        void show();
        static void showSum();
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    sum++;
    cout << "Created a car" << endl;
}
void Car::setCar(int n, double g) 
{   
    num = n;
    gas = g;
    cout << "Set number to " << num << " and gas to " << gas << endl;
}
void Car::showSum()
{
    cout << "Sum is " << sum << endl;
}
void Car::show() 
{
    cout << "Number is " << num << " and gas is " << gas << endl;
}

int Car::sum = 0;

int main()
{
    Car::showSum();

    Car car1;
    car1.setCar(1234, 20.5);

    Car::showSum();

    Car car2;
    car2.setCar(4567, 30.5);

    Car::showSum();

    return 0;
}
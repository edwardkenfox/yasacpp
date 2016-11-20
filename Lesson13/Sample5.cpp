#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        Car(int n=0, double g=0);
        void show();
};

Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "Created a car with number " << num << " and gas " << gas << endl;
}

void Car::show() 
{
    cout << "Number is " << num << " and gas is " << endl;
}

int main()
{
    Car car1;
    Car car2(1234, 20.5);

    return 0;
}
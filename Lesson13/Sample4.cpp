#include <iostream>
using namespace std;

class Car{
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
    cout << "Created a car" << endl;
}
Car::Car(int n, double g) 
{
    num = n;
    gas = g;
    cout << "Created a car with number " << num << " and gas " << gas << endl;
}
void Car::show()
{
    cout << "Number is " << num << " and gas is " << gas << endl;
}

int main()
{
    Car cars[3];

    return 0;
}
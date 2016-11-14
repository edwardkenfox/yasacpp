#include <iostream>
using namespace std;

class Car {
    private:
        int num;
        double gas;
    public:
        void show();
        void setNumGas(int n, double g);
};

void Car::show()
{
    cout << "Number " << num << endl;
    cout << "Gas " << gas << endl;
}
void Car::setNumGas(int n, double g)
{
    if (g > 0 && g < 1000) {
        num = n;
        gas = g;
        cout << "Assigned number as " << num << " and gas as " << gas << endl;
    } else {
        cout << g << " is invalid" << endl; 
    } 
}

int main()
{
    Car car1;

    // invalid
    // car1.num = 1234;
    // car1.gas = 20.2;

    car1.setNumGas(1234, 20.5);
    car1.show();

    cout << "Assigning invalid value" << endl;
    car1.setNumGas(1234, -10.0);
    car1.show();

    return 0;    
}
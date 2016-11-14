#include <iostream>
using namespace std;

class Car {
    private:
        int num;
        double gas;
    public:
        int getNum() { return num; }
        double getGas() { return gas; }
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
        cout << "Assigned number " << num << " and gas " << gas << endl;
    } else {
        cout << g << " is invalid" << endl;
    }
}

void buy(Car& c);

int main()
{
    Car car1;
    car1.setNumGas(1234, 20.5);
    buy(car1);
    return 0;
}

void buy(Car& c)
{
    int n = c.getNum();
    double g = c.getGas();
    cout << "Bought a car with number " << n << " and gas of " << g << endl;
}
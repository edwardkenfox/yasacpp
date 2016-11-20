#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle{
    protected:
        int speed;
    public:
        void setSpeed(int s);
        virtual void show() = 0;
};

class Car : public Vehicle{
    private:
        int num;
        double gas;
    public:
        Car(int n, double g);
        void show();
};

class Plane : public Vehicle{
    private:
        int flight;
    public:
        Plane(int f);
        void show();
};

void Vehicle::setSpeed(int s)
{
    speed = s;
    cout << "Set speed to " << speed << endl;
}

Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "Created a car with number " << num << " and gas " << gas << endl;   
}
void Car::show()
{
    cout << "Number is " << num << " and gas is " << gas << " and speed is " << speed << endl;
}

Plane::Plane(int f)
{
    flight = f;
    cout << "Created Plane with flight " << flight << endl;
}
void Plane::show()
{
    cout << "Flight is " << flight << " and speed is " << speed << endl;
}

int main()
{
    Vehicle* pVc[2];
    Car car1(1234, 20.5);
    Plane pln1(232);

    pVc[0] = &car1;
    pVc[1] = &pln1;

    for(int i=0; i<2; i++) {
        if (typeid(*pVc[i]) == typeid(Car)) {
            cout << i << ": typeid is " << typeid(Car).name() << endl;
        } else {
            cout << i << ": typeid is not " << typeid(Car).name() << ", but is " << typeid(*pVc[i]).name() << endl;
        }
    }
}
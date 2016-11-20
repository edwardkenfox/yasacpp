#include <iostream>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void setCar(int n, double g);
        void show();
};

class RacingCar : public Car{
    private:
        int course;
    public:
        RacingCar();
        RacingCar(int n, double g, int c);
        void setCourse(int c);
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "Creaed a car" << endl;
}
Car::Car(int n, double g)
{
    num = n;
    gas = g;
    cout << "Created with number " << num << " and gas " << gas << endl;
}
void Car::setCar(int n, double g)
{
    num = n;
    gas = g;
    cout << "Set number to " << num << " and gas to " << gas << endl;
}
void Car::show()
{
    cout << "Number is " << num << " and gas " << gas << endl; 
}

RacingCar::RacingCar()
{
    course = 0;
    cout << "Created a racing car" << endl;
}
RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
    course = c;
    cout << "Created a racing car with course " << course << endl;
};
void RacingCar::setCourse(int c)
{
    course = c;
    cout << "Set course to " << course << endl;
}

int main()
{
    RacingCar rccar1(1234, 20.5, 5);

    return 0;
}
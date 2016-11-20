#include <iostream>
using namespace std;

class Car{
    protected:
        int num;
        double gas;
    public:
        Car();
        void setCar(int n, double g);
        void show();
};

class RacingCar : public Car{
    private:
        int course;
    public:
        RacingCar();
        void setCourse(int c);
        void show();
};

Car::Car()
{
    num = 0;
    gas = 0.0;
    cout << "Creaed a car" << endl;
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
void RacingCar::setCourse(int c)
{
    course = c;
    cout << "Set course to " << course << endl;
}
void RacingCar::show()
{
    cout << "Racing car number " << num << " and gas " << gas << " and course " << course << endl;
};

int main()
{
    Car* pCars[2];

    Car car1;
    RacingCar rccar1;

    pCars[0] = &car1;
    pCars[0]->setCar(1234, 20.5);

    pCars[1] = &rccar1;
    pCars[1]->setCar(4567, 30.5);

    for(int i=0; i<2; i++) {
        pCars[i]->show();
    }

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(char* pN, int n, double g);
        ~Car();
        Car(const Car& c);
        Car& operator=(const Car& c);
};

Car::Car(char* pN, int n, double g)
{
    pName = new char[strlen(pN)+1];
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << "Created " << pName << endl;
}
Car::~Car()
{
    cout << "Deconstructing " << pName << endl;
    delete[] pName;
}
Car::Car(const Car& c)
{
    cout << "Initializing with " << c.pName << endl;
    pName = new char[strlen(c.pName) + strlen("のコピー1")+1];
    strcpy(pName, c.pName);
    strcat(pName, "のコピー1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c)
{
    cout << "Assigning " << c.pName << " to " << pName << endl;
    if (this != &c) {
        delete[] pName;
        pName = new char[strlen(c.pName)+strlen("のコピー2")+1];
        strcpy(pName, c.pName);
        strcat(pName, "のコピー2");
        num = c.num;
        gas = c.gas;
    }
    return *this;
}

int main()
{
    char str[] = "mycar";
    Car mycar(str, 1234, 25.5);
    Car car1 = mycar;

    char str2[] = "mycar";
    Car car2(str2, 0, 0);
    car2 = mycar;

    return 0;
}
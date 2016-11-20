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
        void show();
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
    cout << "Destructing " << pName << endl;
    delete[] pName;
}
void Car::show()
{
    cout << "Number is " << num << ", gas is " << gas << ", name is " << pName << endl;
}

int main()
{   
    char str[10] = "mycar"; 
    Car car1(str, 1234, 25.5);
    car1.show();

    return 0;
}
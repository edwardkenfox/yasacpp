#include <iostream>
using namespace std;

struct Car {
    int num;
    double gas;
};

int main()
{
  Car car1 = {1234, 25.5};
  Car car2 = {5678, 52.2};

  cout << "car1: " << car1.num << " & " << car1.gas << endl;  
  cout << "car2: " << car2.num << " & " << car2.gas << endl;

  car2 = car1;

  cout << "car2: " << car2.num << " & " << car2.gas << endl;

  return 0;
}
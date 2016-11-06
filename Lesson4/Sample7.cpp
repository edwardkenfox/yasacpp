#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    cout << "sizeof short int: " << sizeof(short int) << "\n";
    cout << "sizeof int: " << sizeof(int) << "\n";
    cout << "sizeof long int: " << sizeof(long int) << "\n";
    cout << "sizeof float: " << sizeof(float) << "\n";
    cout << "sizeof double: " << sizeof(double) << "\n";
    cout << "sizeof long double: " << sizeof(long double) << "\n";
    cout << "sizeof variable a: " << sizeof(a) << "\n";
    cout << "sizeof expression a+b: " << sizeof(a+b) << "\n";

    return 0;    
}
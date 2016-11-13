#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int& rA = a;

    cout << "value a " << a << endl;
    cout << "value rA " << rA << endl;

    rA = 50;

    cout << "value rA " << rA << endl;
    cout << "value a " << a << endl;
    cout << "address of a " << &a << endl;
    cout << "address of rA " << &rA << endl;

    return 0;
}
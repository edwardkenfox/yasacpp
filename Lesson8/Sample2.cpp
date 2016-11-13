#include <iostream>
using namespace std;

int main()
{
    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << "var a " << a << "\n";
    cout << "address of a " << &a << "\n";
    cout << "pointer of a " << pA << "\n";

    return 0;
}
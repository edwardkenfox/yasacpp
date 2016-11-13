#include <iostream>
using namespace std;

int main()
{
    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << "value of a " << a << "\n";
    cout << "address of a " << &a << "\n";
    cout << "pointer pA " << pA << "\n";
    cout << "value of pA " << *pA << "\n";

    return 0;
}
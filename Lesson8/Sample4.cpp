#include <iostream>
using namespace std;

int main() 
{
    int a = 5;
    int b = 10;
    int* pA;

    pA = &a;

    cout << "value of a " << a << "\n";
    cout << "pointer pA " << pA << "\n";
    cout << "value of *pA " << *pA << "\n";

    pA = &b;

    cout << "value of b " << b << "\n";
    cout << "pointer pA " << pA << "\n";
    cout << "value of *pA " << *pA << "\n";

    return 0;
}
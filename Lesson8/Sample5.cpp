#include <iostream>
using namespace std;

int main()
{
    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << "value of a " << a << "\n";

    *pA = 50;

    cout << "value of a " << a << "\n";

    return 0;
}
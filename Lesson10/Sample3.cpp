#include <iostream>
using namespace std;

int main()
{
    int* pA;

    pA = new int;

    cout << "Memory allocated" << endl;

    *pA = 10;

    cout << "Using allocated memory " << *pA << endl;

    delete pA;

    return 0;
}
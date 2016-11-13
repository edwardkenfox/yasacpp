#include <iostream>
using namespace std;

int main()
{
    int test[5] = {80,60,55,22,75};

    cout << "test[0] " << test[0] << endl;
    cout << "test[0] address " << &test[0] << endl;
    cout << "test " << test << endl;
    cout << "test+1 " << test+1 << endl;
    cout << "*(test+1) " << *(test+1) << endl;

    return 0;
}
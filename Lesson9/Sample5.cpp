#include <iostream>
using namespace std;

int main()
{
    int test[5] = {80,60,55,22,75};

    cout << "test[0] is " << test[0] << endl;
    cout << "test[0] address is " << &test[0] << endl;
    cout << "test value is " << test << endl;
    cout << "*test value is " << *test << endl;

    return 0; 
}
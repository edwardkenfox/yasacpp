#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "value of num1 " << num1 << endl;
    cout << "value of num2 " << num2 << endl;
    
    swap(num1, num2);

    cout << "value of num1 " << num1 << endl;
    cout << "value of num2 " << num2 << endl;

    return 0;
}

void swap(int& x, int& y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}
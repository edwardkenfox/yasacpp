#include <iostream>
using namespace std;

void swap(int* pX, int* pY);

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "value of num1 " << num1 << "\n";
    cout << "value of num2 " << num2 << "\n";
    
    swap(&num1, &num2);

    cout << "value of num1 " << num1 << "\n";
    cout << "value of num2 " << num2 << "\n";

    return 0;
}

void swap(int* pX, int* pY)
{
    int tmp;

    tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}
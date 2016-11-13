#include <iostream>
#include "myfunc.h"
using namespace std;

int main()
{
    int num1, num2, ans;

    cout << "Input first number" << endl;
    cin >> num1;

    cout << "Input second number" << endl;
    cin >> num2;

    ans = myMax(num1, num2);

    cout << "Max is " << ans << endl;

    return 0;
}
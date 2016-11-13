#include <iostream>
using namespace std;

void add(int* x, int* y, int add);

int main() {
    int num1;
    int num2;
    int addition;

    int* p1 = &num1;
    int* p2 = &num2;

    cout << "input two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    cout << "input the addition" << endl;
    cin >> addition;

    add(p1, p2, addition);

    cout << "You added " << addition << " so the scores are now " << num1  << " and " << num2 << endl; 
}

void add(int* x, int* y, int add)
{
    *x = *x + add;
    *y = *y + add;
}
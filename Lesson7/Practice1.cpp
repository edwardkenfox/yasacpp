#include <iostream>
using namespace std;

template <class T>
T squaret(T x) {
    return x *= x;
}

int main() {
    int input1;
    double input2;

    cout << "Input a number:\n";
    cin >> input1;
    cout << "Square of " << input1 << " is " << squaret(input1) << "\n";

    cout << "Input a double:\n";
    cin >> input2;
    cout << "Square of " << input2 << " is " << squaret (input2) << "\n";
}

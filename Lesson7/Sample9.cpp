#include <iostream>
using namespace std;

inline int max(int x, int y) {
    if (x>y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int num1, num2, ans;

    cout << "Input first number:\n";
    cin >> num1;

    cout << "Input second number:\n";
    cin >> num2;

    ans = max(num1, num2);

    cout << "Max number is " << ans << " .\n";

    return 0;
}
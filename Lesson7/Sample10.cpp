#include <iostream>
using namespace std;

int max(int x, int y);

int main() {
    int num1, num2, ans;

    cout << "first number\n";
    cin >> num1;
    cout << "second number\n";
    cin >> num2;

    ans = max(num1, num2);
    cout << "Max is " << ans << "\n";
}

int max(int x, int y) {
    return (x > y ? x : y);
}
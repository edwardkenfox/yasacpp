#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5, sum;
    num1 = num2 = num3 = num4 = num5 = sum = 0;

    cout << "Score of subject 1: \n";
    cin >> num1;
    sum += num1;

    cout << "Score of subject 2: \n";
    cin >> num2;
    sum += num2;

    cout << "Score of subject 3: \n";
    cin >> num3;
    sum += num3;

    cout << "Score of subject 4: \n";
    cin >> num4;
    sum += num4;

    cout << "Score of subject 5: \n";
    cin >> num5;
    sum += num5;

    cout << "Total: " << sum << "\n";
    cout << "Average: " << sum/5 << "\n";

    return 0;
}
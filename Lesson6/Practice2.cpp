#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int input = 1;

    cout << "Input your score:\n";

    while(input) {
        cin >> input; 
        sum += input;
    }

    cout << "Total score:" << sum << "\n";

    return 0;
}
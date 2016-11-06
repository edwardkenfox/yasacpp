#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "Input a number: \n";

    cin >> res;

    switch(res) {
        case 1:
            cout << "Your input was 1.\n";
            break;
        case 2:
            cout << "Your input was 2.\n";
            break;
        default:
            cout << "Input must be 1 or 2.\n";
            break;
    }

    return 0;
}
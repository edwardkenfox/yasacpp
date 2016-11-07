#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    while(num) {
        cout << "Input a number: \n";
        cin >> num;
        cout << "Your input was: " << num << "\n";
    }

    cout << "Finished!\n";

    return 0;
}
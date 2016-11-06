#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Input a number: \n";

    cin >> num;

    for(int i=1; i<=num; i++) {
        sum += i;
    }

    cout << "Counted up from 1 to " << num << " and the total is: " << sum << "\n";

    return 0; 
}
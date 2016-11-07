#include <iostream>
using namespace std;

int main() {
    int res;

    cout << "At which loop you wish to stop?\n";
    cin >> res;

    for(int i=1; 1<=10; i++) {
        cout << "Loop No.: " << i << "\n";
        if (i == res) {
            break;
        }
    }

    return 0;
} 
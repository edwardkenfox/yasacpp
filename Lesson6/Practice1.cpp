#include <iostream>
using namespace std;

int main() {
    cout << "Display even numbers upto 10.\n";

    for(int i=1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << "\n";
        }
    } 

    return 0;
}
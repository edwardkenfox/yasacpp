#include <iostream>
using namespace std;

int main() {
    int res;

    cout << "Which loop you want to skip?\n";

    cin >> res;

    for(int i=1; i<=10; i++) {
        if (i == res) {
            continue;
        }
        cout << "Loop No.: " << i << "\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() 
{
    int i = 1;

    do {
        cout << i << "th repeat.\n";
        i++;
    } while (i <= 5);

    cout << "Done.\n";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    double dnum = 160.5;
    int inum;

    cout << "Height: " << dnum << "\n";
    cout << "Assigning to int var...\n";

    inum = dnum;

    cout << "Height: " << inum << "\n";

    return 0; 
}
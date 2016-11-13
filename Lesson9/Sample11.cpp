#include <iostream>
#include <cstring>
using namespace std;


int main() 
{
    char str[100];

    cout << "Input a string" << endl;

    cin >> str;

    cout << "Length of the string is: " << strlen(str) << endl;

    return 0;
}
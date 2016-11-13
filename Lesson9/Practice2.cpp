#include <iostream>
#include <cstring>
using namespace std;

int length(char* str);

int main()
{
    char str[10];
    cout << "Input a string" << endl;
    cin >> str;
    int l = length(str);
    cout << "Length was " << l << endl;
    return 0;
}

int length(char* str)
{
    return strlen(str);
}

#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char str0[20];
    char str1[10];
    char str2[10];

    strcpy(str1, "Hello");
    strcpy(str2, "Goodbye");
    strcpy(str0, str1);
    strcat(str0, str2);

    cout << "Array str1 is " << str1 << endl;
    cout << "Array str2 is " << str2 << endl;
    cout << "Concated " << str0 << endl;

    return 0;
}
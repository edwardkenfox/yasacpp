#include <iostream>
using namespace std;

int count(char str[], char ch);

int main()
{
    char str[100];
    char ch;
    int result;

    cout << "Input a string" << endl;
    cin >> str;

    cout << "Input the target char" << endl;
    cin >> ch;

    result = count(str, ch);

    cout << "There's " << result << " " << ch << " in " << str << endl; 

    return 0;
}

int count(char str[], char ch)
{
    int cnt = 0;

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            cnt++;
        }
    }

    return cnt;
}
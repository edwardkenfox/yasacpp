#include <iostream>
using namespace std;

double avg(int t[]);

int main()
{
    int test[5];

    cout << "Input 5 numbers" << endl;
    for(int i=0; i<5; i++) {
        cin >> test[i];
    }
    double ans = avg(test);
    cout << "Average of 5 inputs: " << ans << endl;
    
    return 0;
}

double avg(int t[])
{
    double sum = 0;
    for(int i=0; i<5; i++) {
        sum += t[i];
    }
    return sum/5;
}

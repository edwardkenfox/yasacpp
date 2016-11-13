#include <iostream>
using namespace std;

int max(int x[]);

int main()
{
    int arr[5];
    cout << "Input 5 numbers" << endl;
    for(int i=0; i<5; i++) {
        cin >> arr[i];
    }

    int ans = max(arr);
    cout << "Max is " << ans << endl;

    return 0;
}

int max(int x[])
{
    int max = x[0];
    for(int i=1; i<5; i++) {
        if(max < x[i]) {
            max = x[i];
        }
    }
    return max;   
}
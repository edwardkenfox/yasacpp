#include <iostream>
using namespace std;

int main()
{
    int num;
    int* pT;

    cout << "How many numbers you wish to input?" << endl;
    cin >> num;

    pT = new int[num];

    cout << "Input numbers as much as you said" << endl;

    for(int i=0; i<num; i++) {
        cin >> pT[i];
    }

    for(int j=0; j<num; j++) {
        cout << j+1 << "th value is " << pT[j] << endl;
    }

    delete[] pT;

    return 0;
}
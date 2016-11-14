#include <iostream>
using namespace std;

union Year {
    int ad;
    int gengo;
};

int main()
{
    Year myyear;
    
    cout << "Input the year" << endl;
    cin >> myyear.ad;

    cout << "Year " << myyear.ad << endl;
    cout << "Gengo " << myyear.gengo << endl;

    cout << "Input the gengo" << endl;
    cin >> myyear.gengo;

    cout << "Year " << myyear.ad << endl;
    cout << "Gengo " << myyear.gengo << endl;

    return 0;
}
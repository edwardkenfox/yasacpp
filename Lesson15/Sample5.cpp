#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> vt;

    cout << "How many inputs?" << endl;
    cin >> num;

    for(int i=0; i<num; i++) {
        int data;
        cout << "Input a number" << endl;
        cin >> data;
        vt.push_back(data);
    }

    cout << "Displaying..." << endl;
    vector<int>::iterator it = vt.begin();
    while(it != vt.end()) {
        cout << *it;
        cout << "-";
        it++;
    }

    cout << endl;
    return 0;
}
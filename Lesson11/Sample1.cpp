#include <iostream>
using namespace std;

enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
    Week w;
    w = SUN;

    switch(w) {
        case SUN: cout << "Sunday" << endl; break;
        case MON: cout << "Monday" << endl; break;
        case TUE: cout << "Tuesday" << endl; break;
        case WED: cout << "Wednesday" << endl; break;
        case THU: cout << "Thursday" << endl; break;
        case FRI: cout << "Friday" << endl; break;
        case SAT: cout << "Saturday" << endl; break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

int main() {
    int a, b;
    double da, db;

    cout << "Input two integer numbers:\n";
    cin >> a >> b;

    cout << "Input two floating point numbers:\n";
    cin >> da >> db;

    int ans1 = max(a, b);
    double ans2 = max(da, db);

    cout << "Integer max: " << ans1 << "\n";
    cout << "Floating point max: " << ans2 << "\n";

    return 0;
}

int max(int x, int y) {
    return (x > y ? x : y); 
}

double max(double x, double y) {
    return (x > y ? x : y);
}
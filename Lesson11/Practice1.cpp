#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

int main()
{
    Person p1;
    Person p2;
    
    cout << "First person: age" << endl;
    cin >> p1.age;
    cout << "First person: weight" << endl;
    cin >> p1.weight;
    cout << "First person: height" << endl;
    cin >> p1.height;

    cout << "Second person: age" << endl;
    cin >> p2.age;
    cout << "Second person: weight" << endl;
    cin >> p2.weight;
    cout << "Second person: height" << endl;
    cin >> p2.height;

    cout << "First person age " << p1.age << " weight " << p1.weight << " height " << p1.height << endl;
    cout << "Second person age " << p2.age << " weight " << p2.weight << " height " << p2.height << endl;

    return 0;
}
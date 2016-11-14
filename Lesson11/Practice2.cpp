#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

void age(Person* p);

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

    cout << "First person age " << p1.age << " weight " << p1.weight << " height " << p1.height << endl;
    age(&p1);
    cout << "First person age " << p1.age << " weight " << p1.weight << " height " << p1.height << endl;

    return 0;
}

void age(Person* p)
{
    p->age++;
    cout << "Aged." << endl;
}
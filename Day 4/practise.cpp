#include <iostream>
using namespace std;

int main()
{
    int age = 18;
    float height = 5.4;
    char grade = 'A';
    cout << "My age: " << age << endl;
    cout << "My height: " << height << " feet" << endl;
    cout << "My grade: " << grade << endl;

    int a, b, c;
    a = 5;
    b = 10;

    cout << "before swap a: " << a << endl;
    cout << "before swap b: " << b << endl;
    b = b - a;
    c = b + a;
    a = c;

    cout << "after swap a : " << a << endl;
    cout << "after swap b : " << b << endl;
    return 0;
}
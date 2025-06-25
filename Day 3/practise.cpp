#include <iostream>
using namespace std;

int main()
{
    string YourName;
    cout << "Hey user enter your name" << endl;
    cin >> YourName;

    cout << "Hello " << YourName << endl;

    int num1, num2;

    cout << "enter the value of first number: " << endl;
    cin >> num1;

    cout << "enter the value of second number: " << endl;
    cin >> num2;

    cout << "sum of this two number: " << num1 + num2 << endl;

    string realName;
    int realAge;

    cout << "enter your real naem: " << endl;
    cin >> realName;
    cout << "enter your real age: " << endl;
    cin >> realAge;

    cout << "Hello " << realName << "you are: " << realAge << " years old" << endl;
    return 0;
}
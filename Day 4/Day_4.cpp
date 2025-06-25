#include <iostream>
#include <string> // this header file is needed for string
using namespace std;

int main()
{
    // learning about variables
    // vairables is basically a nmame given in memory where we store our values

    int a = 45;              // in this line,  int is a data type (number), a is the variable name and 45 is the value
    char letter = 'a';       // in this line , char is a data type (letter) there should be quotes. and letter is the variable name and value is 'a'
    float num = 34.342;      // in this line, float is a data type (decimal point value) and num is the variable name and 34.342 is the value.
    bool isStudent = true;   // in this line bool is a datat type (true/false) and isstudent is the variable name and true is the value
    string Myname = "Munin"; // in this line string is a data type (words) and myname is the variable name and munin is the value

    //     ✅ Rules
    // Start with a letter (or underscore _)

    // Only use letters, numbers, and underscores

    // No spaces or special characters

    // Case-sensitive (age and Age are different)

    // Can't use C++ keywords (like int, return, while, etc.)
    cout << "memory taken by the integers: "<< sizeof (a) << endl;
    cout << "memory taken by the chat: " << sizeof (letter) << endl;
    cout << "memory taken by the float: " << sizeof (num) << endl;
    cout << "memory taken by the bool: " << sizeof (isStudent) << endl;
    cout << "momory taken by the string: " << sizeof (Myname) << endl; 
    return 0;
}
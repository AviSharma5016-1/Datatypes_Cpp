// Name - Avi Sharma
// PRN - 24070123025
// Batch - EnTC - A1

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "Integer = " << a << " | Size = " << sizeof(a) << " bytes" << endl;

    float b;
    cout << "Enter a decimal (float): ";
    cin >> b;
    cout << "Float = " << b << " | Size = " << sizeof(b) << " bytes" << endl;

    string c;
    cout << "Enter a word (string): ";
    cin >> c;
    cout << "String = " << c << " | Size (object) = " << sizeof(c) << " bytes" << endl;

    double d;
    cout << "Enter a double value: ";
    cin >> d;
    cout << "Double = " << d << " | Size = " << sizeof(d) << " bytes" << endl;

    char e;
    cout << "Enter a character: ";
    cin >> e;
    cout << "Char = " << e << " | Size = " << sizeof(e) << " byte" << endl;

    bool f;
    cout << "Enter a boolean (0 or 1): ";
    cin >> f;
    cout << "Boolean = " << boolalpha << f << " | Size = " << sizeof(f) << " byte" << endl;

    return 0;
}

/*
Sample Output (Tested by Avi Sharma)

Enter any integer: 123
Integer = 123 | Size = 4 bytes

Enter a decimal (float): 45.67
Float = 45.67 | Size = 4 bytes

Enter a word (string): hello
String = hello | Size (object) = 32 bytes

Enter a double value: 99.999
Double = 99.999 | Size = 8 bytes

Enter a character: A
Char = A | Size = 1 byte

Enter a boolean (0 or 1): 1
Boolean = true | Size = 1 byte

--- Program executed successfully ---
*/

#include <iostream>

using namespace std;

int main() {

    char* ptr1, * ptr2;


    ptr1 = new char;


    ptr2 = new char;


    cout << "Enter a character for the first pointer: ";
    cin >> *ptr1;


    cout << "Enter a character for the second pointer: ";
    cin >> *ptr2;


    *ptr1 += 2;


    cout << "Value of the first pointer after increment: " << *ptr1 << endl;
    cout << "Value of the second pointer: " << *ptr2 << endl;


    delete ptr1;
    delete ptr2;

    return 0;
}

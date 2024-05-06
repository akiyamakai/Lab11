#include <iostream>

using namespace std;

int main() {
    int a, b;
    int* ptrA, * ptrB;


    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;


    ptrA = &a;
    ptrB = &b;


    *ptrA *= 4;


    *ptrB /= 5;


    cout << "Updated value for a: " << a << endl;
    cout << "Updated value for b: " << b << endl;

    return 0;
}

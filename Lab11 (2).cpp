#include <iostream>

using namespace std;

int main() {
    int n, m;
    int* x, * y;


    cout << "Enter the size of array x: ";
    cin >> n;
    cout << "Enter the size of array y: ";
    cin >> m;


    x = new int[n];
    y = new int[m];


    cout << "Enter elements for array x:\n";
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    cout << "Enter elements for array y:\n";
    for (int i = 0; i < m; ++i) {
        cin >> y[i];
    }


    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (x[i] == y[6]) {
            count++;
        }
    }


    cout << "The number of occurrences of the 7th element of array y in array x: " << count << endl;


    delete[] x;
    delete[] y;

    return 0;
}

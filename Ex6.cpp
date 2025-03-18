#include "bits/stdc++.h"
using namespace std;

int main () {
    int num1;
    int num2;
    int num3;

    cout << "Diguem el primer numero: ";
    cin >> num1;

    cout << "Diguem el segon numero: ";
    cin >> num2;

    cout << "Diguem el tercer numero: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "El nombre " << num1 << " Es més gran que " << num2 << " i " << num3;
    }
    if (num2 >= num1 && num2 >= num3) {
        cout << "El nombre " << num2 << " Es més gran que " << num1 << " i " << num3;
    }
    if (num3 >= num1 && num3 >= num2) {
        cout << "El nombre " << num3 << " Es més gran que " << num1 << " i " << num2;
    }
    
    return 0;
}
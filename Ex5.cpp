#include "bits/stdc++.h"
using namespace std;

void convertirbase(int num1, int base) {
    if (base == 1) {
        cout << "El numero binari és " << bitset<8>(num1) << std::endl;
    }
    else if (base == 2) {
        cout << "El numero octal és " << oct << num << std::endl;
    }
    else if (base == 3) {
        cout << "El numero hexadecimal és " << hex << num << std::endl;
    }
}

int main() {
    int menu;

    cout << "Eligeix una opció (número): << 1. Suma  2. Resta  3. Multiplicació  4. Divisió  5. Mòdul  6. Canvi de base  7. Comparació" << std::endl;
    
        cin >> menu;

    switch (menu) {
        case 1:
            int num1, num2;

            cout << "Eligeix el primer número per sumar: ";
            cin >> num1;

            cout << "Eligeix el segon número per sumar: ";
            cin >> num2;

            cout << "El resultat de " << num1 << " més " << num2 << " és " << num1 + num2;
        
        case 2:
            cout << "Eligeix el primer número per restar: ";
            cin >> num1;

            cout << "Eligeix el segon número per restar: ";
            cin >> num2;

            cout << "El resultat de " << num1 << " menys " << num2 << " és " << num1 - num2;

        case 3:
            cout << "Eligeix el primer número per multiplicar: " << std::endl;
            cin >> num1;

            cout << "Eligeix el segon número per multiplicar: " << std::endl;
            cin >> num2;

            cout << "El resultat de " << num1 << " multiplicat per " << num2 << " és " << num1 * num2;

        case 4:
            cout << "Eligeix el primer número per dividir: " << std::endl;
            cin >> num1;

            cout << "Eligeix el segon número per dividir: " << std::endl;
            cin >> num2;

            cout << "El resultat de " << num1 << " dividit per " << num2 << " és " << num1 / num2;

        case 5:
            cout << "Eligeix el primer número per modular: ";
            cin >> num1;

            cout << "Eligeix el segon número per modular: ";
            cin >> num2;

            cout << "El resultat de " << num1 << " dividit per " << num2 << " modulat és " << num1 % num2;

        case 6:
            int base;
            cout << "Introdueix un número decimal: " << std::endl;
            cin >> num1;

            cout << "Tria la base:  1. Binari   2. Octal    3. Hexadecimal): " << std::endl;
            cin >> base;

            convertirbase(num1, base);
        
        case 7:
            cout << "Diguem el primer número: " << std::endl;
            cin >> num1;

            cout << "Diguem el segon número: " << std::endl;
            cin >> num2;

            if (num1 < num2) {
                cout << num1 << " és més petit que " << num2;
            }
            
            if (num1 > num2) {
                cout << num1 << " és més gros que " << num2;
            }
            
            if (num1 == num2) {
                cout << num1 << " és igual que " << num2;
            }
    }
    return 0;
    
}
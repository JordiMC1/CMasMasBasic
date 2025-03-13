#include "bits/stdc++.h"
using namespace std;

void convertirbase(int num, int base) {
    if (base == 1) {
        cout << "El numero binari és " << bitset<8>(num) << std::endl;
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
    
    cout << "Eligeix una opció (número):    1. Suma    2. Resta   3. Multiplicació  4. Divisió  5. Módul   6. Canvi de base: " << std::endl;
    cin >> menu;

    if (menu == 1) {
        int num1, num2;

        cout << "Eligeix el primer número per sumar: ";
        cin >> num1;

        cout << "Eligeix el segon número per sumar: ";
        cin >> num2;

        cout << "El resultat de " << num1 << " més " << num2 << " és " << num1 + num2;
        
    }
    
    if (menu == 2) {
        int num1, num2;

        cout << "Eligeix el primer número per restar: ";
        cin >> num1;

        cout << "Eligeix el segon número per restar: ";
        cin >> num2;

        cout << "El resultat de " << num1 << " menys " << num2 << " és " << num1 - num2;
        
    }

    if (menu == 3) {
        int num1, num2;

        cout << "Eligeix el primer número per multiplicar: ";
        cin >> num1;

        cout << "Eligeix el segon número per multiplicar: ";
        cin >> num2;

        cout << "El resultat de " << num1 << " multiplicat per " << num2 << " és " << num1 * num2;
        
    }

    if (menu == 4) {
        int num1, num2;

        cout << "Eligeix el primer número per dividir: ";
        cin >> num1;

        cout << "Eligeix el segon número per dividir: ";
        cin >> num2;

        cout << "El resultat de " << num1 << " dividit per " << num2 << " és " << num1 / num2;
        
    }

    if (menu == 5) {
        int num1, num2;

        cout << "Eligeix el primer número per modular: ";
        cin >> num1;

        cout << "Eligeix el segon número per modular: ";
        cin >> num2;

        cout << "El resultat de " << num1 << " dividit per " << num2 << " modulat és " << num1 % num2;
        
    }

    if (menu == 6) {
        int num1, base;

        cout << "Eligeix el número DECIMAL el cual volem cambiar de base (Màxim 255): ";
        cin >> num1;

        cout << "Eligeix la base vols utilitzar? 1. Binari   2. Octal 3. Hexadecimal: " << std::endl;
        cin >> base;
        
        convertirbase(num1, base);
    }

    if (menu == 7) {
        int num1, num2;

        cout << "Eligeix el primer número: ";
        cin >> num1;

        cout << "Eligeix el segon número: ";
        cin >> num2;
        cout << "El número més gran és " << 
    }

    return 0;
    
}
#include "bits/stdc++.h"
using namespace std;

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

        cout << "Eligeix el número DECIMAL el cual volem cambiar de base: ";
        cin >> num1;

        cout << "Eligeix la base vols utilitzar? 1. Binari   2. Octal 3. Hexadecimal: " << std::endl;
        cin >> base;
        
        cout << "El número binari de " << num1 << " és " << 
    }

    return 0;
    
}
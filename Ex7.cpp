#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> llista;
    string paraula;

    cout << "Introdueix paraules (una per línia). Deixa una línia buida per acabar:" << std::endl;

    while (true) {
        getline(cin, paraula);
        if (paraula.empty()) break;
        llista.push_back(paraula);
    }

    cout << "Mida de la llista: " << llista.size() << " paraules" << std::endl;

    return 0;
}

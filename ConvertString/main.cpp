#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char k1[25], k2[25];
    cout << "Escreve uma palavra: ";
    cin >> k1;
    cout << "Escreve outra palavra: ";
    cin >> k2;

    strcat(k1,k2);
    cout << "\nResultado da fusão das palavras: " << k1 << endl;
    // cout << endl;

    cout << "\nSe convertido em letras MAIUSCULAS: " << endl;
    cout << strupr(k1);
    cout << endl;

    cout << "\nSe convertido em letras MINUSCULAS: " << endl;
    cout << strlwr(k1);
    cout << endl;

    return 0;
}

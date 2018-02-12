#include <iostream>
#include <string.h>
#include <stdio.h>
#include <locale.h>
using namespace std;

int main(){
    int x;
    char s[50];
    cout << "Digite uma palavra: ";
    gets(s);
    x = strlen(s);
    cout << "\nA palavra possui " << x << " caracteres." << endl;
    return 0;
}

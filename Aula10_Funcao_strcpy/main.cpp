#include <iostream>
#include <string.h>
#include <stdio.h>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, " ");
    char s1[100], s2[100], s3[100];
    cout << "Digite uma frase: ";
    fgets(s1, sizeof(s1), stdin);
    strcpy(s2, s1);
    strcpy(s3, "Voce digitou a frase: ");
    cout << "\n\n" << s3 << s2 << endl;
    return 0;
}

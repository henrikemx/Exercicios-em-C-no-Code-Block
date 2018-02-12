#include <iostream>
#include <string.h>
#include <stdio.h>
//#include <locale.h>
//#include <tchar.h>
using namespace std;

int main(){
    //_tsetlocale(LC_ALL, _T(" "));
    //setlocale(LC_ALL, " ");
    char s[10], x[10];
    cout << "Digite uma palavra: ";
    gets(s);
    cout << "Digite outra palavra: ";
    gets(x);
    if(strcmp(s, x)==0)
        cout << "\nAs palavras são iguais !" << endl;
    else
        cout << "\nAs palavras são diferentes !" << endl;
    return 0;
}

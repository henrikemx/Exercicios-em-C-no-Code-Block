#include <iostream>
#include <cstring>
#include <cstdio>
//#include <clocale>
#include <tchar.h>
using namespace std;

int main(){
    //setlocale(LC_ALL,"");
    _tsetlocale(LC_ALL, _T(""));
    char n[100];
    cout << "Digite seu nome: ";
    fgets(n, sizeof(n), stdin);
    cout << "\nOl�, " << n << endl;
    cout << "#### Bem vindo ao mundo da Linguagem C++ !! ####" << endl;
    return 0;
}

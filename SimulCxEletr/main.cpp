#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//#include <cctype>

using namespace std;

char s[10], login[10], up[10], uprc[10];
void cadacesso();

int main(){
    int op;
    char r[3], rc[3];
    do{
        system("cls");
        cout << "Seu primeiro acesso ? [S/N]: ";
        gets(rc);
        //fgets(rc, sizeof(rc), stdin);
        strupr(rc);
        if(strcmp(rc, "S")==0)
           cadacesso();
        //acesso();
        system("cls");
        cout << "\t**** Menu Principal ****" << endl;
        cout << "(1) Saldo\n(2) Saque\n(3) Deposito" << endl;
        cout << endl;
        cout << "    Opcao -> ";
        cin >> op;
        switch(op){
            case 1:
            //saldo();
            break;
            case 2:
            //saque();
            break;
            case 3:
            //deposito();
            break;
            default:
            cout << "\n\nOpção INVÁLIDA !";
        }
        cout << "\n\nDeseja repetir a operacao ? [S/N]: ";
        cin >> r;
        strupr(r);
    }
    while(strcmp(r, "S")==0);
    cout << "\n\n#### Obrigado por usar os nossos serviços ####" << endl;
}

void cadacesso(){
    char cs[10], clogin[10];
    do {
        system("cls");
        cout << "Login: ";
        gets(login);
        //fgets(login, sizeof(login), stdin);
        cout << "Confirme seu login: ";
        gets(clogin);
        // fgets(clogin, sizeof(clogin), stdin);
    } while(strcmp(login, clogin)!=0);
    do {
        system("cls");
        cout << "Senha: [de 6 a 8 caracteres] ";
        gets(s);
        //fgets(s, sizeof(s), stdin);
    } while(strlen(s)>8);
    cout << "\nConfirme sua senha: ";
    gets(cs);
    //fgets(cs, sizeof(cs), stdin);
    while(strcmp(s, cs)!=0){
        do {
            system("cls");
            cout << "Senha [de 6 a 8 caracteres]: ";
            gets(s);
            //fgets(s, sizeof(s), stdin);
        } while (strlen(s)>8);
        cout << "\nConfirme sua senha: ";
        gets(cs);
        //fgets(cs, sizeof(cs), stdin);
    }
}

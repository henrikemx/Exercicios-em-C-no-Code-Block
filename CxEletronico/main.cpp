#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//#include <locale.h>
#include <dos.h>
#include <windows.h>
using namespace std;

char s[10], login[10], up[10], uprc[10];
float sa = 1000, sq, de, li = 1000;
void cadacesso();
int acesso();
void saldo();
void saque();
void deposito();

int main(){
    //setlocale(LC_ALL, " ");
    int op;
    char r[3], rc[3];
    system("cls");
    cout << "Seu primeiro acesso ? [S/N]: ";
    gets(rc);
    strupr(rc);
    if(strcmp(rc, "S")==0)
       cadacesso();
    if(acesso()<=3){
        do {
        system("cls");
        cout << "\t**** Menu Principal ****" << endl;
        cout << "(1) Saldo\n(2) Saque\n(3) Deposito" << endl;
        cout << endl;
        cout << "    Opcao -> ";
        cin >> op;
        switch(op){
            case 1:
                saldo();
                break;
            case 2:
                saque();
                break;
            case 3:
                deposito();
                break;
            default:
                cout << "\n\nOpção INVÁLIDA !" << endl;
        }
        cout << "\n\nDeseja repetir a operacao ? [S/N]: ";
        cin >> r;
        strupr(r);
        }
        while(strcmp(r, "S")==0);
        cout << "\n\n#### Obrigado por usar os nossos serviços ####" << endl;
    }
}

void saldo(){
    system("cls");
    cout << "\nSeu saldo atual é de R$ " << sa << endl;
    cout << "Seu limite é de R$ " << li << endl;
    cout << "Voce tem disponível, para movimentação, é de R$ " << sa+li << "\n\n";
    system("pause");
}

void saque(){
    system("cls");
    cout << "\nDigite o valor da retirada: R$ ";
    cin >> sq;
    if (sq>sa+li){
        cout << "\nSaldo INSUFICIENTE!!" << endl;
        cout << endl;
        system("pause");
    }
    else
        sa -= sq;
    saldo();
}

void deposito(){
    system("cls");
    cout << "\nInforme o valor do depósito: R$ ";
    cin >> de;
    sa += de;
    saldo();
}

int acesso(){
    int x=1;
    char vs[10], vlogin[10];
    if(strlen(s)<8)
        x = 4;
    for (;x <= 3; x++){
        system("cls");
        cout << "\t ***** VERIFICAÇÃO DE USUÁRIO *****" << endl;
        cout << "Digite seu login: ";
        gets(vlogin);
        cout << "Digite sua senha: ";
        gets(vs);
        if ((strcmp(vs, s)==0) & (strcmp(vlogin, login)==0))
            break;
        else
            cout << "\nSenha ou Login INVÁLIDO !!" << "\n\n";
    }
    return x;
}

void cadacesso(){
    char cs[10], clogin[10];
    do {
        system("cls");
        cout << "Login: ";
        gets(login);
        cout << "Confirme seu login: ";
        gets(clogin);
    } while(strcmp(login, clogin)!=0);
    do {
        system("cls");
        cout << "Senha: [8 caracteres] ";
        gets(s);
    } while(strlen(s)<8);
    cout << "\nConfirme sua senha: ";
    gets(cs);
    while(strcmp(s, cs)!=0){
        do {
            system("cls");
            cout << "Senha [8 caracteres]: ";
            gets(s);
        } while (strlen(s)<8);
        cout << "\nConfirme sua senha: ";
        gets(cs);
    }
}

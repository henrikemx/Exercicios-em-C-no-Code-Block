#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main(){
    setlocale(LC_ALL, " ");
    char s1[100], s2[100], str[80];
    cout << "Digite uma palavra: ";
    gets(s1);
    //fgets(s1, sizeof(s1), stdin);
    cout << "Digite outra palavra: ";
    gets(s2);
    //fgets(s2, sizeof(s2), stdin);
    strcat(s1, " ");
    strcat(s1, s2);
    cout << "\n\n" << s1 << endl;
    cout << endl;
    strcpy (str,"these ");
    strcat (str,"strings ");
    strcat (str,"are ");
    strcat (str,"concatenated.");
    puts (str);

    return 0;
}

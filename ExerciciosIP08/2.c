#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include this header for tolower() function
int main(){
    char s[513];
    char senha[12] = "Abracadabra";
    printf("Senha? ");
    gets(s);
    if (strcmpi(s, senha) == 0){ // Use strcmpi() instead of _strcmpi()
        puts("Senha correta!");
    } else {
        puts("Senha incorreta!");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("Olá, mundo!\n");
    printf("Meu nome é Ermogenes.\n\n");
    printf("Este é o meu primeiro programa em C.\n");

    return 0;
}

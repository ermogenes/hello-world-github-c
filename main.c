#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    printf("Ol�, mundo!\n");
    printf("Meu nome � Ermogenes.\n\n");
    printf("Este � o meu primeiro programa em C.\n");

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Digite um número.\n");
    int numero;
    scanf("%d",&numero);
    if(numero%2==0)
    {
        printf("Par.");
    }
    else
    {
        printf("Impar.");
    }

    return 0;
}
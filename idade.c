#include <stdio.h>

int main()
{
    printf("Digite sua idade.\n");
    int idade;
    scanf("%d",&idade);
    
    if (idade<0)
    {
        printf("Idade inválida.");
    }
    else if (idade<12)
    {
        printf("Criança.");
    }
    else if (idade<18)
    {
        printf("Adolescente.");
    }
    else
    {
        printf("Adulto.");
    }
    return 0;
}
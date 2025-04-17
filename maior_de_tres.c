#include <stdio.h>

int main()
{
    printf("Digite três números: X X X\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("O primeiro número é o maior.");
    }
    else if(b>c&&b>a)
    {
        printf("O segundo número é o maior.");
    }
    else if(c>b&&c>a)
    {
        printf("O terceiro número é o maior.");
    }
    else
    {
        printf("Todos os números são iguais.");
    }
    return 0;
}
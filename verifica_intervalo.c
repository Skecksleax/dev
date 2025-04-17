#include <stdio.h>

int main()
{
    printf("Insira um número.\n");
    int n;
    scanf("%d",&n);
    if(n>=0&&n<=100)
    {
        printf("O número está entre 0 e 100");
    }
    else
    {
        printf("O número não está entre 0 ou 100");
    }

    return 0;
}
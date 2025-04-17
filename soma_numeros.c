#include <stdio.h>

int main()
{
    printf("Digite um número: ");
    int n,u,s=0;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Número inválido.");
    }
    else
    {
            for(u=1;u<=n;u++)
        {
            s=s+u;
            printf("%d\n",s);
        }

    }
    return 0;
}
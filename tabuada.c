#include <stdio.h>

int main()
{
    printf("Insira um número: ");
    int n, t;
    scanf("%d",&t);
    for(n=1;n<=10;n++)
    {
        printf("%d\n",t*n);
    }

    return 0;
}
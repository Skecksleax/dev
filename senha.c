#include <stdio.h>

int main()
{
    printf("Digite uma senha: ");
    int senha;
    scanf("%d",&senha);
    while(senha!=1234)
    {
       printf("Senha incorreta. Tente novamente: ");
       scanf("%d",&senha);
    }
    if(senha==1234)
    {
        printf("Senha correta.");
    }
    return 0;
}
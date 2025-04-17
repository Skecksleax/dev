#include <stdio.h>

int main()
{
    printf("Digite suas notas: X X X\n");
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b+c)/3<4)
    {
        printf("Reprovado.");
    }
    else if((a+b+c)/3<6)
    {
        printf("Recuperação.");
    }
    else if((a+b+c)/3<=10)
    {
        printf("Aprovado.");
    }
    else
    {
        printf("Nota inválida.");
    }

    return 0;
}
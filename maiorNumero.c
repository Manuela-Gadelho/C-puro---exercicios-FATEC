#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    //alterando para o padrão do sistema operacional
    printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));

    int num, num1;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Digite outro número: \n");
    scanf("%d", &num1);

    if (num > num1)
        {
            printf("O número %d é maior que o número %d", num, num1);
        }
    else
    {
        printf("O número %d é maior", num1);
    }
}

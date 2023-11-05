#include <stdio.h>
#include <math.h>
#include <locale.h> //necessário para usar setlocale

int main()
{
    //alterando para o padrão do sistema operacional
    printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));

    int num, novoNum;

    printf("Digite um número positivo e maior do que 0: ");
    scanf("%d", &num);

    // O número ao quadrado
    novoNum = num * num;
    printf("O quadrado do número digitado é: %d\n", novoNum);

    //O número ao cubo
    novoNum = num * num * num;
    printf("O cubo deste número é: %d\n", novoNum);

    //A raiz quadrada do número digitado
    novoNum = sqrt(num);
    printf("A raiz quadrada deste número é: %d\n", novoNum);
}

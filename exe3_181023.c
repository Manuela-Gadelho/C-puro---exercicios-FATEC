#include <stdio.h>
#include <math.h>
#include <locale.h> //necess�rio para usar setlocale

int main()
{
    //alterando para o padr�o do sistema operacional
    printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

    int num, novoNum;

    printf("Digite um n�mero positivo e maior do que 0: ");
    scanf("%d", &num);

    // O n�mero ao quadrado
    novoNum = num * num;
    printf("O quadrado do n�mero digitado �: %d\n", novoNum);

    //O n�mero ao cubo
    novoNum = num * num * num;
    printf("O cubo deste n�mero �: %d\n", novoNum);

    //A raiz quadrada do n�mero digitado
    novoNum = sqrt(num);
    printf("A raiz quadrada deste n�mero �: %d\n", novoNum);
}

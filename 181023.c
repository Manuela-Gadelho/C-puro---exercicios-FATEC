#include <stdio.h>
#include <math.h>
#include <locale.h> //necess�rio para usar setlocale

int main()
{
    //alterando para o padr�o do sistema operacional
    printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

    double raiz, valor, valor1;
    // c�lculo da raiz quadrada
    printf("Digite um valor: ");
    scanf("%lf", &raiz);

    valor = sqrt(raiz);
    printf("O valor da raiz �: %.2f", valor);

    printf("\n\n=============\n");
    printf("Potencia��o\n");
    valor1 = pow(2,3);
    printf("O valor da pot�ncia �: %.2f", valor1);

    return 0;
}



 /*Tipos de vari�veis
    int xpto = 5;
    printf("O conte�do da vari�vel �: %d", xpto);

    int xpto1 = 10;
    printf("\nO conte�do da vari�vel �: %d e %d\n", xpto, xpto1);

    //sizeof � um operador que indica a dimens�o de um tipo de vari�vel
    printf("O tamanho em bytes de um char: %d\n", sizeof(char));
    printf("O tamanho em bytes de um int: %d\n", sizeof(int));
    printf("O tamanho em bytes de um float: %d\n", sizeof(float));
    printf("O tamanho em bytes de um double: %d\n", sizeof(double));

    short int xpto;
    long int xpto1;
    printf("\nO tamanho em bytes de um short int: %d\n",sizeof(xpto));
    printf("\nO tamanho em bytes de um long int: %d\n",sizeof(xpto1));

    printf("Insira um valor short int: ");
    scanf("%hd,&xpto");

    printf("Insira um valor long int: ");
    scanf("%ld,&xpto1");

    unsigned int xpto2;
    printf("Inteiro sem sinal: ");
    scanf("%d", &xpto2);

        float valor;
    double valor1;

    printf("Entre com um valor float: ");
    scanf("%f", &valor);

    printf("Entre com um valor double: ");
    scanf("%lf", &valor1);

    printf("");
*/

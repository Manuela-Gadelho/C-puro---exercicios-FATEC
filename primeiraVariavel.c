#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    //declara��o de vari�veis
    char nome_var, nome_varl;
    int xpto, xpto1, xpto2;
    float xpto3, xpto4;
    double xpto5, xpto6;

    //*n�o tem o tipo boleano nativamente*

    xpto1 = 10;
    xpto2 = 2;
    xpto = xpto1 + xpto2;

    printf("A soma de %d e %d �: %d\n",xpto1,xpto2,xpto);

    xpto = xpto1 - xpto2;
    printf("A soma de %d e %d �: %d\n",xpto1,xpto2,xpto);

    xpto = xpto1 * xpto2;
    printf("A soma de %d e %d �: %d\n",xpto1,xpto2,xpto);

    xpto = xpto1 % xpto2;
    printf("A soma de %d e %d �: %d\n",xpto1,xpto2,xpto);

    printf("Entre com um valor: ");
    scanf("%d", &xpto1);

    printf("Entre com um valor: ");
    scanf("%d", &xpto2);

    printf("Entre com um valor: ");
    scanf("%d", &xpto3);


    // c�digo de formata��o para tipo inteiro � o %d, usamos para imprimir resultado de vari�veis junto de uma string
    // no exemplo acima, fizemos com 3 vari�veis. conseguimos observar que primeiro indicamos
    //o local onde valor inserir as vari�veis com o c�digo de formata��o
    //e em seguida da string colocamos, respectivamente, cada uma delas que ser�o exibidas em tela

}

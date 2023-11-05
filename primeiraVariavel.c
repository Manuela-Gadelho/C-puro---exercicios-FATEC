#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    //declaração de variáveis
    char nome_var, nome_varl;
    int xpto, xpto1, xpto2;
    float xpto3, xpto4;
    double xpto5, xpto6;

    //*não tem o tipo boleano nativamente*

    xpto1 = 10;
    xpto2 = 2;
    xpto = xpto1 + xpto2;

    printf("A soma de %d e %d é: %d\n",xpto1,xpto2,xpto);

    xpto = xpto1 - xpto2;
    printf("A soma de %d e %d é: %d\n",xpto1,xpto2,xpto);

    xpto = xpto1 * xpto2;
    printf("A soma de %d e %d é: %d\n",xpto1,xpto2,xpto);

    xpto = xpto1 % xpto2;
    printf("A soma de %d e %d é: %d\n",xpto1,xpto2,xpto);

    printf("Entre com um valor: ");
    scanf("%d", &xpto1);

    printf("Entre com um valor: ");
    scanf("%d", &xpto2);

    printf("Entre com um valor: ");
    scanf("%d", &xpto3);


    // código de formatação para tipo inteiro é o %d, usamos para imprimir resultado de variáveis junto de uma string
    // no exemplo acima, fizemos com 3 variáveis. conseguimos observar que primeiro indicamos
    //o local onde valor inserir as variáveis com o código de formatação
    //e em seguida da string colocamos, respectivamente, cada uma delas que serão exibidas em tela

}

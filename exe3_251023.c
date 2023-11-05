#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    //alterando para o padrão do sistema operacional
    printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));



}

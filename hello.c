#include <stdio.h>
#include <locale.h>
#include <string.h>
    int main(void)

{
    //linha de coment�rio
    //apresenta��o de mensagem

    printf("hello world\n");
    printf("c:\"documentos\"");

    // \7 ou \a emite um bip sonoro
    // \t d� um tab no c�digo
    // \v tabula��o vertical

    /* aqui
    tem
    como
    fazer
    coment�rio
    multi linha
    */

  printf("\n****** Verificando a localidade corrente ********\n\n");
  printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
  printf("N�o � poss�vel usar acentua��o ou � corretamente�\n\n");

  printf("\n****** Alterando para a localidade do sistema ********\n\n");

  //alterando para o padr�o do sistema operacional
  printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));
  printf("Agora n�o tem mais problema algum!\n");
  printf("J� posso usar acentua��o e tamb�m o caracter �\n\n\n");

  system("pause");
  return 0;

}


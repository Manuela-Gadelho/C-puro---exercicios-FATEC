#include <stdio.h>
#include <locale.h>
#include <string.h>
    int main(void)

{
    //linha de comentário
    //apresentação de mensagem

    printf("hello world\n");
    printf("c:\"documentos\"");

    // \7 ou \a emite um bip sonoro
    // \t dá um tab no código
    // \v tabulação vertical

    /* aqui
    tem
    como
    fazer
    comentário
    multi linha
    */

  printf("\n****** Verificando a localidade corrente ********\n\n");
  printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
  printf("Não é possível usar acentuação ou ç corretamente…\n\n");

  printf("\n****** Alterando para a localidade do sistema ********\n\n");

  //alterando para o padrão do sistema operacional
  printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));
  printf("Agora não tem mais problema algum!\n");
  printf("Já posso usar acentuação e também o caracter ç…\n\n\n");

  system("pause");
  return 0;

}


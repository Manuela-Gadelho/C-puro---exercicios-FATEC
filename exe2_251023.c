#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    //alterando para o padr�o do sistema operacional
    printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));

    int opcao, salario, imp, novoSal;
    salario = 0;
    imp = 0;

    printf("Digite o valor do sal�rio do funcion�rio: ");
    scanf("%d", &salario);


   //Menu de op��es ----------------------------------------

    printf("1. Imposto\n");
    printf("2. Novo Sal�rio\n");
    printf("3. Classifica��o\n");
    printf("Digite a op��o que deseja calcular: ");
    scanf("%d", &opcao);

   switch(opcao)
       {
            case 1:
                {
                    printf("Imposto \n");
                        if (salario < 500)
                        {
                            imp = (salario * 0.05);
                            printf("O valor do imposto para este sal�rio �: %d", imp);
                        }
                        if (salario >= 500 && salario <= 850)
                        {
                            imp = (salario * 0.1);
                            printf("O valor do imposto para este sal�rio �: %d", imp);
                        }
                        if (salario > 850)
                        {
                            imp = (salario * 0.15);
                            printf("O valor do imposto para este sal�rio �: %d", imp);
                        }
                }
                break;
            case 2:
                {
                    printf("Novo sal�rio \n");
                    if (salario > 1500)
                    {
                        novoSal = salario + 25;
                        printf("O novo sal�rio ser� de: %d\n", novoSal);
                    }
                    if (salario >= 750 && salario <= 1500)
                    {
                        novoSal = salario + 50;
                        printf("O novo sal�rio ser� de: %d\n", novoSal);
                    }
                    if (salario >= 450 && salario < 750)
                        novoSal = salario + 75;
                        printf("O novo sal�rio ser� de: %d\n", novoSal);

                }
                break;
            case 3:
                {
                    printf("Classifica��o \n");
                    if (salario <= 700)
                    {
                        printf("Este funcion�rio � mal remunerado!");
                    }
                    else
                    {
                        printf("Este funcion�rio � bem remunerado!");

                    }
                }
                break;
            default:
                {
                    printf("Op��o inv�lida\n");

                }
       }

}

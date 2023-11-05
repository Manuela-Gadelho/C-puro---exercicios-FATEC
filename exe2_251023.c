#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    //alterando para o padrão do sistema operacional
    printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));

    int opcao, salario, imp, novoSal;
    salario = 0;
    imp = 0;

    printf("Digite o valor do salário do funcionário: ");
    scanf("%d", &salario);


   //Menu de opções ----------------------------------------

    printf("1. Imposto\n");
    printf("2. Novo Salário\n");
    printf("3. Classificação\n");
    printf("Digite a opção que deseja calcular: ");
    scanf("%d", &opcao);

   switch(opcao)
       {
            case 1:
                {
                    printf("Imposto \n");
                        if (salario < 500)
                        {
                            imp = (salario * 0.05);
                            printf("O valor do imposto para este salário é: %d", imp);
                        }
                        if (salario >= 500 && salario <= 850)
                        {
                            imp = (salario * 0.1);
                            printf("O valor do imposto para este salário é: %d", imp);
                        }
                        if (salario > 850)
                        {
                            imp = (salario * 0.15);
                            printf("O valor do imposto para este salário é: %d", imp);
                        }
                }
                break;
            case 2:
                {
                    printf("Novo salário \n");
                    if (salario > 1500)
                    {
                        novoSal = salario + 25;
                        printf("O novo salário será de: %d\n", novoSal);
                    }
                    if (salario >= 750 && salario <= 1500)
                    {
                        novoSal = salario + 50;
                        printf("O novo salário será de: %d\n", novoSal);
                    }
                    if (salario >= 450 && salario < 750)
                        novoSal = salario + 75;
                        printf("O novo salário será de: %d\n", novoSal);

                }
                break;
            case 3:
                {
                    printf("Classificação \n");
                    if (salario <= 700)
                    {
                        printf("Este funcionário é mal remunerado!");
                    }
                    else
                    {
                        printf("Este funcionário é bem remunerado!");

                    }
                }
                break;
            default:
                {
                    printf("Opção inválida\n");

                }
       }

}

#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));

    float nota1, nota2, nota3, media;
    nota1 = nota2 = nota3 = media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A média deste aluno é: %f", media);

    return 0;

}

//Calculadora de Média de notas
//Autor: Quevin Freire

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[15] , sobrenome[15];
    float nota1, nota2, nota3, nota4, media;

    setlocale(LC_ALL,"");// Adicionando caracteres especiais e acentos no console.
    printf("******Calcule a média das suas notas******\n");
    printf("Qual é o seu nome?\n");
    scanf("%s", &nome);
    printf("Qual é o seu sobrenome?\n");
    scanf("%s", &sobrenome);
    printf("Escreva o valor da sua primeira nota:\n");
    // Lendo as notas inseridas.
    scanf("%f", &nota1);
    printf("Escreva o valor da sua segunda nota:\n");
    scanf("%f", &nota2);
    printf("Escreva o valor da sua terceira nota:\n");
    scanf("%f", &nota3);
    printf("Escreva o valor da sua quarta nota:\n");
    scanf("%f", &nota4);
    //Calculando a média
    media = ((nota1 + nota2 + nota3 + nota4)/4);
    //Imprimindo na tela a média e o seu calculo.
    printf("%s %s, sua média é: %0.1f\n",nome, sobrenome, media);
    printf("Calculo: %0.1f + %0.1f + %0.1f + %0.1f / 4 = %0.1f\n",nota1, nota2, nota3, nota4, media);
    //Condicionais para verificar se está aprovado, ou não,e se deve fazer a recuperação.
    if(media >= 7)
    {
        printf("Você está aprovado!");
    }
    else
    {
        if(media >= 6)
            printf("Você está reprovado, mas poderá fazer uma prova de recuperação.");
        else
            printf("Você está reprovado!");
    }
}

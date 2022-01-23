//Calculadora de M�dia de notas
//Autor: Quevin Freire

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;

    setlocale(LC_ALL,"");// Adicionando caracteres especiais e acentos no console.
    printf("******Calcule a m�dia das suas notas******\n");
    printf("\nEscreva o valor da sua primeira nota:\n");
    // Lendo as notas inseridas.
    scanf("%f", &nota1);
    printf("Escreva o valor da sua segunda nota:\n");
    scanf("%f", &nota2);
    printf("Escreva o valor da sua terceira nota:\n");
    scanf("%f", &nota3);
    printf("Escreva o valor da sua quarta nota:\n");
    scanf("%f", &nota4);
    //Calculando a m�dia
    media = ((nota1 + nota2 + nota3 + nota4)/4);
    //Imprimindo na tela a m�dia e o seu calculo.
    printf("Sua m�dia �: %0.1f\n", media);
    printf("Calculo: %0.1f + %0.1f + %0.1f + %0.1f / 4 = %0.1f\n",nota1, nota2, nota3, nota4, media);
    //Condicionais para verificar se est� aprovado, ou n�o,e se deve fazer a recupera��o.
    if(media >= 7)
    {
        printf("Voc� est� aprovado!");
    }
    else
    {
        if(media >= 6)
            printf("Voc� est� reprovado, mas poder� fazer uma prova de recupera��o.");
        else
            printf("Voc� est� reprovado!");
    }
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<conio.h>

int op, i=0;
char nomeJogador [10][10];
int posicao[3][3];

int main(){

setlocale(LC_ALL, "Portuguese");

system("cls");
system("color 0A");
printf("\n           _______________________");
printf("\n          |                       |");
printf("\n          |    ****************   |");
printf("\n          |    * Jogo Da Velha *  |");
printf("\n          |    ****************   |");
printf("\n           _______________________");


printf("\n\n    1- Jogar    2- Sair    3- ver pontuacao ");
scanf("%d", &op);

switch (op)
{
case 1:

    for( i=0; i<2; i++){  // Colocar esse for num void
    system("cls");
    system("color 0B");
    printf("\n ***Registro do Jogador *** \n");
    printf("\n Nome do Jogador : ");
    scanf("%s",&nomeJogador[i]);
    }
    system("cls");
    printf("\nPara escolher a posicao em que deseja jogar, voce precisa escolher a linha e coluna :)\n");
    printf("\n       1      2      3 \n");
    printf("\n          |      |      1");
    printf("\n          |      |    ");
    printf("\n      ----------------");
    printf("\n          |      |      2");
    printf("\n          |      | ");
    printf("\n      ----------------");
    printf("\n          |      |      3");
    printf("\n          |      | ");
    printf("\n \n");

    printf("1 - Jogador "); // Colocar esses comandos num void propio para o 1° Jogador
    printf("\n  Coluna :");
    printf("\n  Linha :");

    printf("\n2 - Jogador "); // Colocar esses comandos num void propio para o 2° Jogador
    printf("\n  Coluna :");
    printf("\n  Linha :");

    break;

case 2:
    printf("Obrigado pela atenção, até logo bye bye !");
    break;

case 3:
    printf("Sua pontuação vai aparecer aqui");

    break;
default:
    break;
}

return 0;
}

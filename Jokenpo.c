#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {    

 int jogador ,computador;
 srand(time(0));//inicializa o gerador aleatório srand com atributo de tempo em 0(tempo real)

 
 printf("---JOGO DO JOKENPÔ---");
 printf("Escolha uma opção:\n");
 printf("1 - Pedra\n");
 printf("2 - Papel\n");
 printf("3 - Tesoura\n");
 scanf("%d", &jogador);

 computador = rand() % 3 + 1;//gera um número aleatório entre 1


 switch (jogador)
 { 
 case 1:
 printf("Jogador escolheu Pedra.\n");
    break;

case 2:
printf("Jogador escolheu Papel.\n");
   break;

case 3:
printf("Jogador escolheu Tesoura.\n");
 
 default:
    break;
 }
 
switch (computador)
 { 
 case 1:
 printf("Computador escolheu Pedra.\n");
    break;

case 2:
printf("Computador escolheu Papel.\n");
   break;

case 3:
printf("Computadorescolheu Tesoura.\n");
 
 default:
    break;
 }


if( jogador == computador){
   printf("### EMPATE ###\n");
}

else if((jogador == 2) && (computador == 1)||
        (jogador == 3) && (computador == 2) ||
        (jogador == 1) && (computador == 3)){
   printf("### JOGADOR VENCEU ###\n");
}
else{ 
   printf("### COMPUTADOR VENCEU ###\n");

}





















}
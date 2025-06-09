#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível: novato

//Movimentos das peças
int torre=5;//Torre
int bispo=5;//Bispo
int rainha=8;//Rainha

void moveTorre(){
    for(int i=1;i<=torre;i++){
        printf("Direita\n");
    }
}
void moveBispo(){
    for(int i=1;i<=bispo;i++){
        printf("Cima, Direita\n");
    }
}
void moveRainha(){
    for(int i=1;i<=rainha;i++){
        printf("Esquerda\n");
    }
}
int menu(){
    int opcao;
    printf("\nEscolha o movimento a realizar:\n");
    printf("\n1 - Torre\n2 - Bispo\n3 - Rainha\n0 - Sair\n");
    printf("Opcao:");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            moveTorre();
            return 1;
            break;
        case 2:
            moveBispo();
            return 1;
            break;
        case 3:
            moveRainha();
            return 1;
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida!");
            return 1;
            break;
    }
    return 0;
}

int main() {
    int executar=1;
    while(executar==1){
        executar=menu();
    }
    printf("Jogo encerrado!");
    
    return 0;
}

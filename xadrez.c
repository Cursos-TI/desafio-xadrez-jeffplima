#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível: aventureiro

//Movimentos das peças
int torre=5;//Torre
int bispo=5;//Bispo
int rainha=8;//Rainha
int cavalo=3;//Cavalo

void moveTorre(){
    printf("\nMovendo Torre:\n");
    for(int i=1;i<=torre;i++){
        printf("Direita\n");
    }
}
void moveBispo(){
    printf("\nMovendo Bispo:\n");
    for(int i=1;i<=bispo;i++){
        printf("Cima, Direita\n");
    }
}
void moveRainha(){
    printf("\nMovendo Rainha:\n");
    for(int i=1;i<=rainha;i++){
        printf("Esquerda\n");
    }
}
void moveCavalo(){
    printf("\nMovendo Cavalo:\n");
    for(int i=1;i<=cavalo;i++){
        for(i=1;i<cavalo;i++){
            printf("Baixo\n");//move cavalo para baixo
        }
        for(i=cavalo;i<4;i++){
            printf("Esquerda\n");//move cavalo para esquerda
        }
    }
}
int menu(){
    int opcao;
    printf("\nEscolha o movimento a realizar:\n");
    printf("\n1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n0 - Sair\n");
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
        case 4:
            moveCavalo();
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
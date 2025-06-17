#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10];

    // Inicializa o Tabuleiro com Água(0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j <10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Define os navios com o tamanho 3

    int navio_horizontais[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    //coordenadas iniciais dos navios

    int linha_h = 2; // linha 2(índice começa do 0)
    int coluna_h = 3; // Coluna D
    
    int linha_v= 4; // linha 5
    int coluna_v= 7; // Coluna A

    // Verificar se há espaço para posicionar o navio horizontal( coluna + tamanho <= 10)

    if (coluna_h + 3 <= 10){
        for (i = 0; i < 3; i++) {
            tabuleiro[linha_h][coluna_h + i] = navio_horizontais[i];
        }
        
    }

    // Verificar se há espaço para posicionar navio vertical (linha + tamanho <=10)
    if (linha_v + 3 <=10){
        for (i = 0; i < 3; i++) {

            tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];

        }
    }

    // Imprime o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");

    //cabeçalho das colunas A-J
    printf("  ");
    for (char letra = 'A'; letra <= 'J'; letra++){
        printf("%c ", letra);
    }
    printf("\n");

    //Impressão das linhas

    for ( i = 0; i < 10; i++) {
        if (i == 9){
            printf("%d ", i + 1);
        } else {
            printf(" %d ", i + 1);
        } for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        
                
    }
    
    
    

    return 0;
}
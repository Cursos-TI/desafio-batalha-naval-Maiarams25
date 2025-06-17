#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Define o tamanho dos tabuleiros e dos Navios
    int tabuleiro[10][10];
    int linhas = 10;
    int colunas = 10;
    int i, j;

    //inicializa o tabuleiro com 0
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //Define a posição do Navio (coluna 2, linha 3 a 5)
    for(j = 3; j <= 5; j++){
        tabuleiro[2][j] = 3;
    }

    //Define a posição do segundo navio vertical (coluna 7, linha 5 a 7)
    for(i = 3; i < 6; i++){
        tabuleiro[i][7] = 3;
    }

    //Exibe o tabuleiro com coordenadas A-J e 1-10
       printf("Tabuleiro de Batalha Naval:\n");

    //Imprime cabeçalho com letras (A-J)
    printf("   ");
    for(j=0; j < colunas; j++){
        printf(" %c", 'A' + j);
    }
    printf("\n");

        //Imprime o conteúdo do tabuleiro incluindo os números das linhas
    for(i = 0; i < linhas; i++){
        printf("%2d ", i + 1);
        for(j = 0; j < colunas; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }


    

    return 0;
}

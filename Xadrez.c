#include <stdio.h>

int main() {
    
    printf("Movimento da Torre:\n");
    int torre = 1;   
    while (torre <= 5) { 
        printf("Cima\n");   
        torre++;      
    }

    printf("\n"); 

    
    printf("Movimento do Bispo:\n");
    int bispo = 1;
    do {
        printf("Cima Esquerda\n"); 
        bispo++;
    } while (bispo <= 5);

    printf("\n");

    
    printf("Movimento da Rainha:\n");
    for(int rainha = 1; rainha <= 5; rainha++) {
        printf("Cima Direita\n");
    }

    return 0;
}
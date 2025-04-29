#include <stdio.h>
int main (){

    //  torre  
    printf("Torre moveu 5 casas à direita\n"); 
    for (int i = 0; i < 5; i++) 
    {
        printf("Direita\n");
    }  
    //Bispo
    printf("Bispo moveu 5 casas à diagonal\n");
    for (int b = 0; b < 5; b++)
    {
        printf("Cima\nDireita\n");
    }
    //Rainha
    printf("A Rainha moveu 8 casas à esquerda\n");
    for (int r = 0; r < 8; r++)
    {
        printf("Esquerda\n");
    }
    


}
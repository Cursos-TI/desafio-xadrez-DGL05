#include <stdio.h>

void movertorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo(int bispo){
    if(bispo > 0){
    for (int j ; j <= 0; j++)
    { printf("Cima\n");
        for (int i = 0; i <= 0; i++)
        {
            printf("Direita\n");
        }
        
    }
    moverbispo(bispo - 1);
}
}
void moverrainha(int rainha){
    if (rainha > 0)
    {
        printf("Esquerda\n");
        moverrainha(rainha - 1);
    }
}
void movercavalo(int cavalo){
    if(cavalo > 0){
    for(int j ;j <= 0; j++){
        printf("Direita\n");
        for (int i = 0; i <= 1; i++)
        {
            printf("Cima\n");
        }
        
    }
    movercavalo(cavalo - 1);}
}

int main (){
    //  torre  
    printf("Torre moveu 5 casas à direita\n"); 
    movertorre(5);
    printf("\n");
    //Bispo
    printf("Bispo moveu 5 casas à diagonal\n");
    moverbispo(5);
    printf("\n");
    //Rainha
    printf("A Rainha moveu 8 casas à esquerda\n");
    moverrainha(8);
    printf("\n");
    //Cavalo
    printf("Cavalo moveu\n");
    movercavalo(1);
    
    

}
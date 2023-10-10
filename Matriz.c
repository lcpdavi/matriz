#include<stdio.h>

int main(){

    /*int matriz[2][2] = {{1, 2},
                        {3, 4}};
    printf("%d", matriz[1][1]);*/

    int matriz[3][5];

    for( int  i = 0; i < 3; i++){
        for( int j = 0; j < 5; j++){
            printf("Digite os valores da matriz [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
     for( int  i = 0; i < 3; i++){
        for( int j = 0; j < 5; j++){
            printf("Digite os valores da matriz [%d][%d]: = %d\n", i, j, matriz[i][j]);
        
        }
        printf("\n");
    }
}
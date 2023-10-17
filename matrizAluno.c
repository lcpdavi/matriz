#include<stdio.h>

int main(){

    char nomes[3][20];
    float notas[3][3], soma, mediaNotas;

    for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno:\n");
        fgets(nomes[i], 20, stdin);

    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite a nota do aluno:\n");
            scanf("%f", &notas[i][j]);
        }

        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        soma = 0;
        for(int j = 0; j < 3; j++){
            soma += notas[i][j];
        }
        mediaNotas = soma/3;
        printf("Nome: %s,Media: %f", nomes[i], mediaNotas);0
    }
}
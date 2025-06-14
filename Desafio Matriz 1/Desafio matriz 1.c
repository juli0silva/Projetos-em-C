/*Faça uma solução para inicializar uma matriz quadrada de tamanho 3,
automaticamente, tal que o elemento a posição (i,j) seja 2*i+j. Em
seguida, o usuário poderá escolher uma das seguintes operações:

A) imprimir todos os elementos da matriz
B) somar os elementos de cada linha e mostrar o resultado
C) somar os elementos de cada coluna e mostrar o resultado
D) imprimir os elementos da diagonal principal
E) imprimir todos os elementos, exceto os da diagonal principal
F) imprimir os elementos, tal que a linha é par e a coluna é ímpar
G) imprimir os elementos da coluna 0, apenas

Use a estrutura switch-case para a seleção da opção*/


#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j, soma=0;
    char opcao;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=2*i+j;
        }
    }
    printf("A) imprimir todos os elementos da matriz\n");
    printf("B) somar os elementos de cada linha e mostrar o resultado\n");
    printf("C) somar os elementos de cada coluna e mostrar o resultado\n");
    printf("D) imprimir os elementos da diagonal principal\n");
    printf("E) imprimir todos os elementos, exceto os da diagonal principal\n");
    printf("F) imprimir os elementos, tal que a linha eh par e a coluna eh impar\n");
    printf("G) imprimir os elementos da coluna 0, apenas\n");
    printf("Selecione uma das opcoes acima: \n");
    scanf(" %c", &opcao);
    switch (opcao){
        case 'a':
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("|%d|", matriz[i][j]);
            }
        printf("\n");
        }
        break;

        case 'b':
        for(i=0;i<3;i++){
            soma=0;
            for(j=0;j<3;j++){
                soma+=matriz[i][j];
            }
        printf("soma da linha %d: %d\n", i+1, soma);
        printf("\n");
        }
        break;

        case 'c':
        for(i=0;i<3;i++){
            soma=0;
            for(j=0;j<3;j++){
                soma+=matriz[i][j];
            }
        printf("soma da coluna %d: %d\n", j+1, soma);
        printf("\n");
        }
        break;

        case 'd':
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
            }
        printf("|%d|", matriz[i][i]);
        }
        break;

        case 'e':
        for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        if(i!=j){
                        printf("|%d|", matriz[i][j]);
                        }
                    }
                    printf("\n");
                }
        break;

        case 'f':
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i%2==0 && j%2 !=0){
                    printf("|%d|", matriz[i][j]);
                }
            }
        }
        break;

        case 'g':
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
            }
        printf("|%d|", matriz[i][0]);
        }
        break;
    }
    return 0;
}
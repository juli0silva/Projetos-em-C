/*Verificador de Elegibilidade para Doação de Sangue
Objetivo: Criar uma solução em Linguagem C que verifique se uma pessoa está apta a doar sangue com base em critérios específicos.
Entrada de Dados:

Idade (em anos).
Peso (em kg).
Se doou sangue nos últimos 3 meses (S/N).
Critérios de Elegibilidade:
Idade mínima: 18 anos.
Peso mínimo: 50 kg.
Não ter doado sangue nos últimos 3 meses.
Se não puder doar, imprimir mensagem com o motivo.
Se puder doar, solicitar o nome completo, sexo, endereço, tipo sanguíneo e fator RH e imprimir o seguinte relatório:

Nome: 		Idade:		Sexo:  		Peso:
Endereço:
Tipo sang.: 		Fator RH:
Obs: Usar a função fgets(nomeVar, sizeof(nomeVar), stdin) para receber cadeia de caracteres via teclado.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    char doacao[10], nome[50], sexo[15], logradouro[90], tipo[5], fator[10];
    float peso;

    printf("Insira sua idade(em anos): \n");
    scanf("%d", &idade);
    printf("Insira seu peso(em kg): \n");
    scanf("%f", &peso);

    getchar();

    printf("Voce doou sangue nos ultimos 3 meses? (sim/nao): \n");
    fgets(doacao, sizeof(doacao), stdin);
    doacao[strcspn(doacao, "\n")] = '\0';

    if(idade >= 18 && peso >= 50.0 && strcmp(doacao, "nao")==0){
        printf("\nParabens, voce esta apto a doar sangue, preencha o relatorio: \n");
        printf("Nome completo: \n");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        printf("Sexo(masculino ou feminino): \n");
        fgets(sexo, sizeof(sexo), stdin);
        sexo[strcspn(sexo, "\n")] = '\0';
        printf("Endereco: \n");
        fgets(logradouro, sizeof(logradouro), stdin);
        logradouro[strcspn(logradouro, "\n")] = '\0';
        printf("Tipo sanguineo: \n");
        fgets(tipo, sizeof(tipo), stdin);
        tipo[strcspn(tipo, "\n")] = '\0';
        printf("Fator RH(positivo/negativo): \n");
        fgets(fator, sizeof(fator), stdin);
        fator[strcspn(fator, "\n")] = '\0';
        printf("\nSeu relatorio completo: \n");
        printf("Nome completo: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Sexo(masculino ou feminino): %s\n", sexo);
        printf("Peso: %.2f\n", peso);
        printf("Endereco: %s\n", logradouro);
        printf("Tipo sanguineo: %s\n", tipo);
        printf("Fator RH(positivo/negativo): %s\n", fator);
        
    }
    else{
        printf("\nInfelizmente, voce nao esta apto a doar sangue.\n");
        if(idade < 18){
            printf("Motivo: Idade inferior a 18 anos.\n");
        }
        if(peso < 50.0){
            printf("Motivo: Peso inferior a 50 kg.\n");
        }
        if(strcasecmp(doacao, "sim") == 0 || strcmp(doacao, "Sim")==0){
            printf("Motivo: Voce doou sangue nos ultimos 3 meses.\n");
        }
    }
    return 0;
}
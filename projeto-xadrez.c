#include <stdio.h>
#include <string.h>

void moverTorre()
{
    int movimentosTorre;
    char direcao[50];

    printf("Por favor, digite um numero de campos que voce deseja andar com a torre: \n");
    scanf("%d", &movimentosTorre);

    printf("Por favor digite a direçao que voce deseja andar ('Direita, esquerda, cima, baixo')?\n");
    scanf("%s", direcao);

    for (int i = 0; i < movimentosTorre; i++)
    {
        printf("Torre moveu-se para a %s pela %d vez \n", direcao, i+1);
    }
};

void moverBispo()
{

    int movimentosBispo;

    printf("Por favor, digite um numero de campos que voce deseja andar com o Bispo: \n");
    scanf("%d", &movimentosBispo);

    char lateralEscolhida[50];
    char verticalEscolhida[50];

    printf("Digite uma lateral para o bispo andar(Direita, esquerda):");
    scanf("%s", lateralEscolhida);

    printf("Digite uma vertical para o bispo andar(Cima, Baixo):");
    scanf("%s", verticalEscolhida);

    int i = 0;

    while (i < movimentosBispo)
    {
        printf("Bispo moveu-se para %s e para %s pela %d vez\n", verticalEscolhida, lateralEscolhida, i+1);
        i++;
    }
}

void moverRainha()
{

    int movimentosRainha;

    printf("Por favor, digite um numero de campos que voce deseja andar com a Rainha: \n");
    scanf("%d", &movimentosRainha);

    char direcao_escolhida[50];

    printf("Por favor digite a direçao que voce deseja andar ('Direita, esquerda, cima, baixo')?\n");
    scanf("%s", direcao_escolhida);

    int i = 0;

    do
    {
        printf("Rainha moveu-se para a %s pela %d\n", direcao_escolhida, i+1);
        i++;
    } while (i < movimentosRainha);
}

int main(

)
{

    int pecaEscolhida;

    printf("Escolha uma peça para mexer:\n");

    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &pecaEscolhida);

    switch (pecaEscolhida)
    {
    case 1:
        moverTorre();
        break;
    case 2:
        moverBispo();
        break;
    case 3:
        moverRainha();
        break;
    default:
        break;
    }

    return 0;
}

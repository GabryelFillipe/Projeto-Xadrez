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
        printf("Torre moveu-se para a %s pela %d vez \n", direcao, i + 1);
    }
}

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
        printf("Bispo moveu-se para %s e para %s pela %d vez\n", verticalEscolhida, lateralEscolhida, i + 1);
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
        printf("Rainha moveu-se para a %s pela %d\n", direcao_escolhida, i + 1);
        i++;
    } while (i < movimentosRainha);
}

void moverCavalo()
{

    int passoLongo = 2;
    char direcaoLonga[50];
    int passosCurto = 1;
    char direcaoCurta[50];

    printf("Digite qual direcao  o cavalo dara o passo longo(Cima, Baixo, Direita ou Esquerda):\n");
    scanf("%s", direcaoLonga);

    printf("Digite qual direcao  o cavalo dara o passo curta(Cima, Baixo, Direita ou Esquerda):\n");
    scanf("%s", direcaoCurta);

    if (strcmp(direcaoLonga, direcaoCurta) == 0)
    {
        printf("Erro: O passo longo e o passo curto nao podem ser na mesma direcao!\n");
        printf("O movimento do cavalo foi cancelado.\n");

        return;
    }

    int opostoVertical = (strcmp(direcaoLonga, "cima") == 0 && strcmp(direcaoCurta, "baixo") == 0) ||
                         (strcmp(direcaoLonga, "baixo") == 0 && strcmp(direcaoCurta, "cima") == 0);

    int opostoHorizontal = (strcmp(direcaoLonga, "esquerda") == 0 && strcmp(direcaoCurta, "direita") == 0) ||
                           (strcmp(direcaoLonga, "direita") == 0 && strcmp(direcaoCurta, "esquerda") == 0);

    if (opostoVertical || opostoHorizontal)
    {
        printf("Erro: Direcoes opostas nao formam um 'L' (ex: cima e baixo).\n");
        printf("O movimento do cavalo foi cancelado.\n");
        return;
    }

    for (int i = 0; i < passoLongo; i++)
    {
        printf("Cavalo andou para %s, pela %i vez\n", direcaoLonga, i + 1);

        if (i == (passoLongo - 1))
        {
            int j = 0;

            while (j < passosCurto)
            {
                printf("Cavalo andou para %s\n", direcaoCurta);
                j++;
            }
        }
    }
    printf("******Cavalo terminou sua movimentacao******");
}
int main(

)
{

    int pecaEscolhida;

    printf("Escolha uma peca para mexer:\n");

    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
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
    case 4:
        moverCavalo();
        break;
    default:
        break;
    }

    return 0;
}

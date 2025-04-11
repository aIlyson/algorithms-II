#include <stdio.h>
#include <stdbool.h>

void questao01(int numInteiros[], int numPesquisado)
{
    for (int i = 0; i < 8; i++)
    {
        if (numInteiros[i] == numPesquisado)
        {
            printf("%d foi encontrado na posicao %d\n", numPesquisado, i);
        }
    }
}

void questao02(int vetorA[], int numPComparar)
{
    // para fazer
}

int main()
{
    int op;

    printf("01. \n");
    printf("02. \n");
    printf("03. \n");
    printf("04. \n");
    printf("05. \n");
    printf("escolha uma questao: ");
    scanf("%d%", &op);

    switch (op)
    {
    case 1:
        int numInteiros[8], numPesquisado;

        for (int i = 0; i < 8; i++)
        {
            printf("digite o %d numero: ", i + 1);
            scanf("%d", &numInteiros[i]);
        }

        printf("digite um numero para pesquisar: ");
        scanf("%d", &numPesquisado);

        questao01(numInteiros, numPesquisado);
        break;

    case 2:

        int vetorA[10], numPComparar;

        for (int i = 0; i < 10; i++)
        {
            printf("digite o %d numero: ", i + 1);
            scanf("%d", &vetorA[i]);
        }

        printf("digite numero para comparar: ");
        scanf("%d%", &numPComparar);

        questao02(vetorA, numPComparar);
        break;

    case 3:

        int vetorX[10];

        for (int i = 0; i < 10; i++)
        {
            printf("digite o %d numero: ", i + 1);
            scanf("%d", &vetorX[i]);

            if (vetorX[i] <= 0)
            {
                vetorX[i] = 1;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", vetorX[i]);
        }
        break;

    case 4:
        int X, vetorN[20];

        printf("digite x para o vetor: ");
        scanf("%d", &X);
        vetorN[0] = X;

        for (int i = 1; i < 20; i++)
        {
            vetorN[i] = vetorN[i - 1] / 2;
        }
        break;

    case 5:
        int vetM[20];

        for (int i = 0; i < 20; i++)
        {
            printf("%d: ", i + 1);
            scanf("%d", &vetM[i]);
        }

        for (int i = 0; i < 10; i++)
        {
            int temp = vetM[i];
            vetM[i] = vetM[19 - i];
            vetM[19 - i] = temp;
        }

        printf("\n");
        for (int i = 0; i < 20; i++)
        {
            printf("%d ", vetM[i]);
        }
        printf("\n");

        break;

    case 6:
        int TAM;
        printf("tamanho: ");
        scanf("%d%", &TAM);

        int vetor[TAM], maior = 0, menor = 0;

        for (int i = 0; i < TAM; i++)
        {
            printf("%d: ", i + 1);
            scanf("%d", &vetor[i]);

            if (vetor[i] > maior)
            {
                maior = vetor[i];
            }
            else if (vetor[i] < menor)
            {
            }
        }

        printf("maior: %d\n", maior);
        printf("menor: %d\n", menor);

        break;
    }

    return 0;
}

#include <stdio.h>

void questao01()
{
    int matriz[3][3];
    int simetrica = 1;

    printf("Digite os elementos da matriz 3x3:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                simetrica = 0;
                break;
            }
        }
        if (!simetrica)
            break;
    }

    if (simetrica)
    {
        printf("Matriz simetrica\n");
    }
    else
    {
        printf("Matriz nao simetrica\n");
    }
}

void questao02(int N, int mat2[N][N])
{
    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("Matriz espelhada horizontalmente:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= 0; j--)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
}

void questao03(int mat3[5][5])
{
    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    printf("Matriz substituida:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 1 && j == 1) || (i == 4 && j == 4))
            {
                mat3[i][j] = 1;
            }
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}

void questao04(int mat4[5][5])
{
    printf("Matriz original:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat4[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        int aux = mat4[0][j];
        mat4[0][j] = mat4[4][j];
        mat4[4][j] = aux;
    }

    printf("Matriz apos troca das linhas 1 e 5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat4[i][j]);
        }
        printf("\n");
    }
}

void questao05(int mat5[5][5])
{
    int maior = mat5[0][0], menor = mat5[0][0];
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat5[i][j] > maior)
            {
                maior = mat5[i][j];
            }
            if (mat5[i][j] < menor)
            {
                menor = mat5[i][j];
            }
            media += mat5[i][j];
        }
    }

    media /= 25;

    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("media: %.2f\n", media);
}

void questao06()
{
    printf("Função não implementada ainda.\n");
}

void questao07(int N, int M, int X, int mat7[N][M])
{
    int encontrado = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat7[i][j] == X)
            {
                printf("Elemento encontrado na linha %d e coluna %d\n", i + 1, j + 1);
                encontrado = 1;
            }
        }
    }

    if (!encontrado)
    {
        printf("Elemento nao encontrado\n");
    }
}

int main()
{
    int op;

    printf("Escolha uma opcao:\n");
    printf("1. Questao 01\n");
    printf("2. Questao 02\n");
    printf("3. Questao 03\n");
    printf("4. Questao 04\n");
    printf("5. Questao 05\n");
    printf("6. Questao 06\n");
    printf("7. Questao 07\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
        questao01();
        break;

    case 2:
    {
        int N;
        printf("Digite N: ");
        scanf("%d", &N);
        int mat2[N][N];
        questao02(N, mat2);
        break;
    }

    case 3:
    {
        int mat3[5][5];
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("Digite o elemento [%d][%d]: ", i, j);
                scanf("%d", &mat3[i][j]);
            }
        }
        questao03(mat3);
        break;
    }

    case 4:
    {
        int mat4[5][5];
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("Digite o elemento [%d][%d]: ", i, j);
                scanf("%d", &mat4[i][j]);
            }
        }
        questao04(mat4);
        break;
    }

    case 5:
    {
        int mat5[5][5]; // Corrigido de [5][2] para [5][5]
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("Digite o elemento [%d][%d]: ", i, j);
                scanf("%d", &mat5[i][j]);
            }
        }
        questao05(mat5);
        break;
    }

    case 6:
        questao06();
        break;

    case 7:
    {
        int N, M, X;
        printf("Digite N e M: ");
        scanf("%d %d", &N, &M);
        printf("Digite X: ");
        scanf("%d", &X);
        int mat7[N][M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                printf("Digite o elemento [%d][%d]: ", i, j);
                scanf("%d", &mat7[i][j]);
            }
        }
        questao07(N, M, X, mat7);
        break;
    }

    default:
        printf("error!\n");
        break;
    }

    return 0;
}

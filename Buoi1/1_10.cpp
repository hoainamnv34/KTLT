#include <stdio.h>

void input(int** mt, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &mt[i][j]);
    }
}

void sumOfMattrix(int** mt1, int** mt2, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mt1[i][j] + mt2[i][j]);
        }
        printf("\n");
    }
}

void productOfMattrix(int** mt1, int** mt2, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int c = 0;
            for (int k = 0; k < n; k++)
            {
                c += mt1[i][k] * mt2[k][j];
            }
            printf("%d ", c);
        }
        printf("\n");
    }
}


int main()
{
    //Vo Hoai Nam 20204592
    int n;
    scanf("%d", &n);

    int** mt1 = new int* [n];
    for (int i = 0; i < n; i++)
        mt1[i] = new int[n];

    int** mt2 = new int* [n];
    for (int i = 0; i < n; i++)
        mt2[i] = new int[n];

    input(mt1, n);
    input(mt2, n);

    printf("\n");
    sumOfMattrix(mt1, mt2, n);
    productOfMattrix(mt1, mt2, n);

    return 0;
}


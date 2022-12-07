
#include <stdio.h>

void input(int arr[], int n)
{
    printf("\nNhap mang: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
}

void process_and_output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    printf("\nHo va ten: Nguyen Hoang Anh\nMSSV: 20204511");

    int n;
    printf("\n\nNhap so phan tu cua mang: ");
    scanf("%d", &n);

    int* arr = new int[n];

    input(arr, n);
    process_and_output(arr, n);

    return 0;
}
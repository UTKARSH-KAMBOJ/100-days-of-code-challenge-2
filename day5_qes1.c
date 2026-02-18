#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter number of entries in server log 1: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter sorted integers for server log 1:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int m = 0;
    printf("Enter number of entries in server log 2: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter sorted integers for server log 2:\n");
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);
    }
    int merge[n + m];
    for (int k = 0; k < n; k++)
    {
        merge[k] = arr1[k];
    }
    for (int k = 0; k < m; k++)
    {
        merge[n + k] = arr2[k];
    }
    printf("Merged log:\n");
    for (int k = 0; k < n + m; k++)
    {
        printf("%d ", merge[k]);
    }
    return 0;
}

#include <stdio.h>

int main() 
{
    int n, pos;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    printf("Enter %d space-separated integers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1-%d): ", n);
    scanf("%d", &pos);


    if (pos < 1 || pos > n)
    {
        printf("Error: Invalid position!\n");
        return 1;
    }

    int index = pos - 1;

    for (int i = index; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }

    printf("Updated array: ");
    for (int i = 0; i < n - 1; i++) 
    {
        printf("%d%s", arr[i], (i == n - 2) ? "" : " ");
    }
    printf("\n");

    return 0;
}
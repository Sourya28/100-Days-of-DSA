#include <stdio.h>

int main() 
{
    int n, pos, x;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 0;

    int arr[n + 1];

    printf("Enter %d space-separated integers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1-%d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &x);


    if (pos < 1 || pos > n + 1) 
    {
        printf("Error: Invalid position!\n");
        return 1;
    }

    int index = pos - 1;

    for (int i = n; i > index; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = x;

    printf("Updated array: ");
    for (int i = 0; i <= n; i++) 
    {
        printf("%d%s", arr[i], (i == n) ? "" : " ");
    }
    printf("\n");

    return 0;
}
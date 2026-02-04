#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    printf("Enter %d space-separated integers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    int temp;

    while (left < right) 
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}
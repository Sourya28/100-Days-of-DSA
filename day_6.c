#include <stdio.h>

void main()
{
    int a[10000]; 
    int n, i, j;
    
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = 0;
    for(i=0; i < n-1; i++)
    {
        if(a[i] != a[i+1])
        {
            a[j] = a[i];
            j++;
        }
    }
    
    a[j] = a[n-1];
    j++;

    for(i=0; i<j; i++)
        printf("%d ", a[i]);
}
#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000]; 
    int i, j, len;
    char temp;

    scanf("%s", s);

    len = strlen(s);

    for(i = 0, j = len - 1; i < j; i++, j--) 
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("%s\n", s);

    return 0;
}
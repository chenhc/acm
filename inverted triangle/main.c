#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=0;j<n-i;j++)
            printf("%c",' ');
        for(j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    double sum;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
        sum+=1.0/k;
    printf("%.3lf\n",sum);
    return 0;
}

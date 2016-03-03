#include <stdio.h>
#include <stdlib.h>

int main()
{
    //long long n,m,k;
    int m,n,k;
    double sum=0;
    scanf("%d %d",&n,&m);
    for(k=n;k<=m;k++)
    {
        sum+=1.0/k/k;
    }
    printf("%.5lf\n",sum);
    return 0;
}

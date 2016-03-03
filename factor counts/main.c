#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long n;
    int i;
    int count=0;
    scanf("%lld",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==sqrt(n))
                count++;
            else
                count+=2;
        }
    }
    printf("%d\n",count);
    return 0;
}

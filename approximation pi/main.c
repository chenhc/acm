#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int k=1;
    double sum=0;
    double sign=1;
    while(1.0/k>=1e-6)
    {
        sum+=sign*1.0/k;
        sign=-1*sign;
        k+=2;
    }
    printf("%.6lf\n",sum);
    return 0;
}

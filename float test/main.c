#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i;
    for(i=0;i!=10;i+=0.1)
    {
        printf("%.8lf\n",i);
    }
    return 0;
}

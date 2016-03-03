#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bit[10];
    int abc,def,ghi;
    memset(bit,0,sizeof(bit));
    for(abc=123;abc<=329;abc++)
    {
        def=2*abc;
        ghi=3*abc;
        bit[abc/100]=1;bit[abc/10%10]=1;bit[abc%10]=1;
        bit[def/100]=1;bit[def/10%10]=1;bit[def%10]=1;
        bit[ghi/100]=1;bit[ghi/10%10]=1;bit[ghi%10]=1;

        int i;
        int count=0;
        for(i=1;i<=9;i++)
        {
            count+=bit[i];
        }
        if(count==9)
            printf("%d %d %d\n",abc,def,ghi);
        memset(bit,0,sizeof(bit));
    }
    return 0;
}

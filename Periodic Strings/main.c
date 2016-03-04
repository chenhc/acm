#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 80+10

int main()
{
    freopen("input.txt","r",stdin);
    int N;
    int T;
    char s[MAX];

    int i,t;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%s",s);
        T=strlen(s);
        for(t=1;t<=strlen(s)/2;t++)
        {
            int ok=1;
            for(i=0;i<strlen(s)-t;i++)
            {
                if(s[i]!=s[i+t])
                {
                    ok=0;
                    break;
                }
            }
            if(ok && strlen(s)%t==0)
            {
                T=t;
                break;
            }
        }
        if(N>0)
        {
            printf("%d\n",T);
            printf("\n");
        }
        else
            printf("%d\n",T);
    }

    return 0;
}

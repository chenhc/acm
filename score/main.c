#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX 80+10

int main()
{
    char s[MAX];
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        int len=strlen(s);
        int score=0;
        int i=0,j=0;
        while(i<len)
        {
            while(s[i++]=='O') j++;
            score+=j*(j+1)/2;
            j=0;
        }
        printf("%d\n",score);
    }

    return 0;
}

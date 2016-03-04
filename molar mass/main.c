#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

#define MAX 80+10

int main()
{
    int count[26]={0};
    int T;
    char s[MAX];
    double mass=0;


    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        int i=0;
        while(i<=strlen(s)-1)
        {
            if(i==strlen(s)-1)
            {
                count[s[i]-'A']++;
                i++;
            }
            else if(isalpha(s[i]) && isalpha(s[i+1]))
            {
                count[s[i]-'A']++;
                i++;
            }
            else if(isalpha(s[i]) && isdigit(s[i+1]) && isdigit(s[i+2]) )
            {
                count[s[i]-'A']+=10*(s[i+1]-'0')+s[i+2]-'0';
                i=i+3;
            }
            else
            {
                count[s[i]-'A']+=s[i+1]-'0';
                i=i+2;
            }
        }
        mass=12.01*count['C'-'A']+1.008*count['H'-'A']+16.00*count['O'-'A']+14.01*count['N'-'A'];
        memset(count,0,sizeof(count));
        printf("%.3lf\n",mass);
    }

    return 0;
}

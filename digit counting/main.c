#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
//#define MAX 50000

//char buf[MAX]={'\0'};

int main()
{
    int T;
    char s[10];
    //int N[10]={0};
    int count[10]={0};
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        int N=atoi(s);
        int n=strlen(s);
        int i,j;

        for(i=0;i<n;i++)
        {
            if(i==0)/*在个位的分布*/
            {
                for(j=0;j<10;j++)
                {
                    count[j]+=(N+1)/10;
                    if(j<(N+1)%10)
                        count[j]++;
                }

            }
            /*高位的分布*/
            else
            {
                int a=(N+1)/(int)pow(10,i+1);
                int b=(N+1)%(int)pow(10,i+1);
                for(j=0;j<10;j++)
                {
                    count[j]+=a*(int)pow(10,i);
                }
            }

        }

        for(i=0;i<n;i++)
            count[0]-=(int)pow(10,i);

        for(i=0;i<=9;i++)
        {
            printf("%d",count[i]);
            if(i==9) printf("\n");
            else printf(" ");
        }
        memset(count,0,sizeof(count));
    }
    return 0;
}
/*
    int T,N;
    int count[10]={0};
    freopen("input.txt","r",stdin);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int i;
        for(i=1;i<=N;i++)
        {
             sprintf(buf+strlen(buf),"%d",i);
        }
        for(i=0;i<strlen(buf);i++)
            count[buf[i]-'0']++;
        buf[0]='\0';
        for(i=0;i<=9;i++)
        {
            printf("%d",count[i]);
            if(i==9) printf("\n");
            else printf(" ");
        }
        memset(count,0,sizeof(count));
    }
*/

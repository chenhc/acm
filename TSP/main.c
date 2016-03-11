#include <stdio.h>
#include <stdlib.h>

#define INF 9999
#define N 4
/*int d[6][6]={
    {0,0,0,0,0,0},
    {0,0,3,INF,4,INF},
    {0,INF,0,5,INF,INF},
    {0,4,INF,0,5,INF},
    {0,INF,INF,INF,0,3},
    {0,7,6,INF,INF,0}
};*/

int d[5][5]={
    {0,3,INF,4,INF},
    {INF,0,5,INF,INF},
    {4,INF,0,5,INF},
    {INF,INF,INF,0,3},
    {7,6,INF,INF,0}
};

/*int d[N][N]={
    {0,1,2,1},
    {INF,0,INF,INF},
    {INF,3,0,1},
    {INF,1,1,0}
};*/

int dp[1<<N][N];

int rec(int S,int v)
{
    if(dp[S][v]>=0)
    {
        return dp[S][v];
    }

    if(S == (1<<N)-1 )
    {
        return dp[S][v]=0;
    }

    int res=INF;
    int u,opt_u=INF;
    for(u=0;u<N;u++)
    {
        if(!(S>>u & 1))
        {
            int temp=rec(S|1<<u, u)+d[v][u];
            if(temp<res)
            {
                res=temp;
            }
        }
    }
    return dp[S][v]=res;
}

void solve()
{
    memset(dp,-1,sizeof(dp));
    printf("%d\n",rec(0,0));
}

int main()
{
    solve();
    int i;
    //int d=dp[S^(1<<u)][0]+d[]
    for(i=0;i<N;i++)
    {
        printf("d[%d][%d]=%d\n",1<<i,i,dp[1<<i][i]);
    }
    printf("\n");
    return 0;
}






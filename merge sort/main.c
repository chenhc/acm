#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void merge_sort(int *a,int low,int high);

void merge(int *a,int low,int mid,int high);

int buf[MAX];

int main()
{
    freopen("input.txt","r",stdin);
    int a[MAX],n=0;
    scanf("%d",&n);
    int i=0;
    while(n--) scanf("%d",&a[i++]);

    printf("input:\n");
    for(n=i,i=0;i<n;i++)
        printf(" %d",a[i]);
    printf("\n");

    merge_sort(a,0,n-1);
    printf("sorted:\n");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    printf("\n");
    return 0;
}

void merge_sort(int *a,int low,int high)
{
    if(low==high) return;
    int mid=(low+high)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
    return;
}

void merge(int *a,int low,int mid,int high)
{
    int i,j,k;
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
            buf[k++]=a[i++];
        else
            buf[k++]=a[j++];
    }
    if(i>mid)
        while(j<=high) buf[k++]=a[j++];
    if(j>high)
        while(i<=mid) buf[k++]=a[i++];

    for(i=0;i<k;i++)
        a[low+i]=buf[i];
    return;
}

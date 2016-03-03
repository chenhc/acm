#include<stdio.h>

void quick_sort(int low,int high,int *a)
{
    int key = a[low];
    int i=low;
    int j=high;
    if(low<high)
    {
        while(low<high)
        {
            while(low<high && a[high]>key)
                high--;
            if(low<high)
                a[low]=a[high];
            while(low<high && a[low]<key)
                low++;
            if(low<high)
                a[high]=a[low];
        }
        a[low]=key;
        quick_sort(i,low-1,a);
        quick_sort(low+1,j,a);
    }

}

int main()
{
    int a[10]={10,9,8,7,6,100,4,3,2,1};
    quick_sort(0,9,a);
    int i=0;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

#include<stdio.h>

int arr[100];
int dist=0;
int m;
int dev(int n)
{
    int count,remined;
    int i=0;
    while(1)
    {
        count=n/2;
        remined=n%2;
        arr[i]= remined;
        if(count==1||count==0)
        {
            m=i+1;
            arr[i+1]=count;
            break;
        }
        n=count;
        i++;
    }
}

int dis(int ar[],int n)
{
    dev(n);
    for(int i=m; i>=0; i--)
    {
        if(ar[i]==1)
        {
            for(int l = i-1; l>=0; l--)
            {
                if(ar[i] - ar[l] == 0)
                {
                    if(dist < (i - l))
                        dist= i - l;
                    break;
                }
            }
        }
    }
    return dist;
}

int main()
{
    int n;
    printf("please enter your number : ");
    scanf("%d",&n);
    for(int i=0; i<=99; i++)
        arr[i]=0;
    printf("longest distance : %d", dis(arr, n));
}

#include<stdio.h>
#include<stdbool.h>

int main ()
{
    int len,temp,a;
    int increasing=0;
    int decreasing=0;
    while(1==1)
    {
        system("cls");
        printf("series state :\n");
        printf("1) Ascending\n");
        printf("2) Descending\n");
        int choise;
        scanf("%d",&choise);
        if(choise == 1 || choise ==2)
        {
            a=choise;
            break;
        }
    }
    printf("please enter your number of series elements : ");
    scanf("%d",&len);
    int series[len];
    int i = 0;
    while(i < len)
    {
        printf("please enter elements number %d : ",i+1);
        scanf("%d",&temp);
        series[i]=temp;
        i++;
    }
    if(a==1)
    {
        for(int j =0; j<len; j-=-1)
            if(series[j]<series[j+1])
                increasing-=-1;
        printf("number of increasing steps : %d",increasing);

    }

    else
    {
        for(int j=0; j<len; j-=-1)
            if(series[i]>series[i+1])
                decreasing-=-1;
        printf("number of decreasing steps : %d",decreasing);
    }
}



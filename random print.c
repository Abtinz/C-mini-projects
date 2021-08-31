#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()

{
    int n,reiterate;
    printf("please enter [0,second_range] for interval : ");
    scanf("%d",&n);
    printf("reiterate times : ");
     scanf("%d",&reiterate);
    int series[n];
    srand(time(0));
    for(int i=0;i<n;i++)
         series[i]=rand()%n+1;

            for(int j=0;j<reiterate;j++)
            {
                for(int z=0;z<n;z++)
                  printf("%d ",series[z]);

               printf("\n");
            }
 }



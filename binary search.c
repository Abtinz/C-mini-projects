#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()

{
    long long int n,lastnum=999999;
    int firstnum=0;
    printf("what is your number ? ");
    scanf("%d",&n);
    for(int i=0; i<20; i++)
    {
        srand(time(NULL));
        int m;
        m=rand()%lastnum+firstnum;
        if(m<n)
        {
            printf("%d\n",m);
            printf("L\n");
            firstnum=(lastnum/2)+1;
        }
        else if(m>n)
        {
            printf("%d\n",m);
            printf("H\n");
            lastnum=(lastnum/2)-1;
        }
        else
        {
            printf("EQ Thats correct! %d is your number",n);
            break;
        }
        if(i==19)
        {
          printf("FAILED\n");
          printf("that was %d",n);
        }
    }

}



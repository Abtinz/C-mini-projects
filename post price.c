#include<stdio.h>

int main()
{
    int weight,Cost,r,a,b;
    printf("please enter the weight of your box :");
    scanf("%d",&weight);
    if(weight<100)
        Cost=1000;
    else if(weight<200)
       Cost=1500;
    else if(weight<300)
       Cost=2000;
    else if(weight<600)
       Cost=3000;
    else{
        r=weight - 500;
        a=r%100;
        b=r/100;
        if(a==0)
        {
           Cost=3000 + (b*500);
        }
        else{

           Cost=3000 + (((r-a)/100)*500);}
    }
    printf("final Cost = %d",Cost);
}

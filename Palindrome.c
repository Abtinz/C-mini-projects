#include <stdio.h>
int x;
int base(int a, int b,int c);
int issymmetric(int n);
int convertion(int temp, int c);

int main()
{
    int a,b,c;
    printf("please enter first number : ");
    scanf("%d", &a);
    printf("please enter first base : ");
    scanf("%d", &b);
    printf("please enter second base : ");
    scanf("%d", &c);
    int num=base(a,b,c);
    x =convertion(num,c);
    printf("(%d) in the base of %d == (%d) in the base of %d\n",a,b,x,c);
    printf(" x == %d\n",x);
    if(issymmetric(x)==1)
        printf("True , %d is palimdrome",x);
    else
        printf("False , %d is not palimdrome",x);
        return 0;
}
int base(int a, int b,int c)
{
    int r=1;
    int temp = 1;
    int temp2 = 0;
    while(a != 0)
    {
        r = a % 10;
        temp2 = temp2 + r*temp;
        temp =temp*b;
        a= a / 10;
    }
    return temp2;
}
int convertion(int temp, int c)
{
    int r,temp2=1;
    int x = 0;
    while(temp != 0)
    {
        r = temp % c;
        x = x + r*temp2;
        temp2 =temp2 * 10;
        temp =temp / c ;
    }
    return x;
}
int issymmetric(int n)
{
    int num =0;
    int f =n;
    int m =n;
    while(n >0)
    {
        num=num*10+n%10;
        n/=10;
    }
    if (num==m)
        return 1;
    else
        return 0;
}

#include<stdio.h>
#include<math.h>

int isPrime(int n);
int issymmetric(int n);

int main()
{
    int n;
    printf("Please enter your number : ");
    scanf("%d",&n);
    printf("Biggest prime and symmetric number after %d : %d",n,issymmetric(n));
}

int isPrime(int n)
{
 if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int issymmetric(int n)
{
    int num =0;
     int f =n;
    if(isPrime(n)==1)
    {
        int m =n;
        while(n >0)
        {
            num=num*10+n%10;
            n/=10;
        }
        if (num==m)
            return m;
        else
            issymmetric(m+1);
    }
    else
        issymmetric(f+1);
}

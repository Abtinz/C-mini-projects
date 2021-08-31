#include<stdio.h>
#include<math.h>

int number;
int fibo(int n){
    if (n==1 || n==2){
        return 1;
    }
    else if (n>2){
        return (fibo(n-1)+fibo(n-2));
    }
}

int fiboCheck(int n){
    int num = 2;
    while (num<=25){
        if (n != fibo(num)){
            num ++;
        } else if(n == fibo(num)){
            number = num;
            return fibo(num+1);
        }
         if(num==25)
           return -1;
    }
}
int main(){
int n;
printf("please enter the your fibonachi number : ");
scanf("%d", &n);
if (fiboCheck(n) == -1){
    printf("Error");
}else{
    printf("%d %d",fibo(number-1),fibo(number+1));
}
}

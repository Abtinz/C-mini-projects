#include<stdio.h>
#include<math.h>

int main()
{
   double a,b,c,d;
   double res1,res2,res3,res4;
   printf("please enter (a,b,c,d) value : \n");
   scanf("%lf",&a);
   scanf("%lf",&b);
   scanf("%lf",&c);
   scanf("%lf",&d);
   res1=(a/(a+b)) + (b/(b+c)) + (c/(c+d));
   res2=pow(M_E ,((log2(fabs(a))) + sin(b) +tan(c)));
   res3=a*(a+b)*b*log(c);
   res4=pow((1/pow(a,1.2))+ (2/pow(b,2.3)),4.5);
   printf("results :\n");
   printf("(a / ( a + b )) + (b /( b + c )) + (c / ( c + d )) : %.2lf\n",res1);
   printf("e ^ ( log|a|  + sin(b) + tan(c) ) : %.2lf\n",res2);
   printf("a * ( a + b ) * b * log(c) : %.2lf\n",res3);
   printf("(1 / ( a ^ 1.2 ))+( 2 / ( b ^ 2.3 ) ): %.2lf\n",res4);
}

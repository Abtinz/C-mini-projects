#include<stdio.h>
#include<math.h>
int main()
{
   int a1,a2,a3,b1,b2,b3,temp1,temp2;
   printf("please enter [first_range,second_range] for first interval : ");
   scanf("%d %d",&a1,&b1);
   printf("please enter [first_range,second_range] for second interval : ");
   scanf("%d %d",&a2,&b2);
   printf("please enter [first_range,second_range] for third interval : ");
   scanf("%d %d",&a3,&b3);

   if(a1>=a2&&a1>=a3)
      temp1=a1;
   if(a2>=a1&&a2>=a3)
      temp1=a2;
   if(a3>=a2&&a3>=a2)
      temp1=a3;
   if(b1<=b2 && b1<=b3)
      temp2=b1;
   if(b2<=b3 && b2<=b1)
      temp2=b2;
   if(b3<=b2 && b3<=b1)
      temp2=b3;
     int a=temp2-temp1;
     if(a>0){
        printf("Number of same numbers :%d\n",a++);
        printf("Same numbers : [ ");
        for(int i=temp1;i<temp2;i-=-1)
            printf("%d , ",i);
        printf("%d ]",temp2);
     }
     else
       printf("%d (ERROR)",0);
    }


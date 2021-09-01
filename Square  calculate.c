#include<stdio.h>
#include<math.h>
#define pi 3.14

int main()
{
    int x;
    printf("Please enter the Side length :");
    scanf("%d",&x);
    int perimeter = 4*x;
    int area = pow(x , 2);
    double diameter = sqrt(2*(area));
    double inside_circle = pow(((double)x/2) ,2)*(pi);
    double outside_circle = diameter*pi;
    printf("Perimeter: %d\n",perimeter);
    printf("Area : %d\n",area);
    printf("Diameter : %.2lf\n",diameter);
    printf("Inside Circle : %.2lf\n",inside_circle);
    printf("Outside Circle : %.2lf\n",outside_circle);

}

#include<stdio.h>

int main ()
{
    int year1,year2,month1,month2,day1,day2;
    int year3,month3,day3;
    printf("please enter the Date of the first year \n");
    scanf("%d %d %d",&year1,&month1,&day1);
    printf("please enter the Date of the second year \n");
    scanf("%d %d %d",&year2,&month2,&day2);
    if (month1 < month2)
    {
        year3 = year1 - year2 - 1;
        if((day1>day2))
        {
            month3 = 12 - month2 + month1 ;
            day3 = 30 - day2 + day1;
        }
        else if((day1<day2))
        {
            month3 = 12 - month2 + month1 -1 ;
            day3 = 30 - day2 + day1;
        }
        else {
            month3 = 12 - month2 + month1;
            day3 = 0;
        }
    }
    else if(month1 > month2)
    {
        year3 = year1 - year2;

        if((day1>day2))
        {
            month3 = 12 - month2 + month1 ;
            day3 = 30 - day2 + day1;
        }
        if((day1<day2))
        {
            month3 = 12 - month2 + month1 -1 ;
            day3 = 30 - day2 + day1;
        }
        else {
            month3 = 12 - month2 + month1;
            day3 = 0;
        }
    }
        else if(month1==month2)
            if(day1==day2)
    {
        year3 = year1 - year2;
        month3 =0 ;
        day3 = 0;
    }
    else{
        month3 = 0 ;
        day3 = 30 - day2 + day1;
        if((day1>day2))
        {
            year3 = year1 - year2;
            day3 = 30 - day2 + day1;
        }
        if((day1<day2))
        {
            year3 = year1 - year2;
            day3 = 30 - day2 + day1;
        }
    }
    printf("result :%d %d %d",year3,month3,day3);
    return 0;
}

#include<stdio.h>
int n;
struct date
{
    int year;
    int month;
    int day;
} ;
struct date a[10];
int qsort(int m);
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i-=-1)
        scanf("%d %d %d",&(a[i].year),&(a[i].month),&(a[i].day));
    int m;
    scanf("%d",&m);
    qsort(m);
}
int qsort(int m)
{
    int temp=0;
    if(m==-1)
    {
        for(int i=0;i<n; i-=-1)
            for(int j=i+1;j<n;j-=-1)
            {
                if(a[j].year>a[i].year)
                {
                    temp=a[j].year;
                    a[j].year=a[i].year;
                    a[i].year=temp;

                    temp=a[j].month;
                    a[j].month=a[i].month;
                    a[i].month=temp;

                    temp=a[j].day;
                    a[j].day=a[i].day;
                    a[i].day=temp;

                }
                if(a[j].year==a[i].year)
                    if(a[j].month>a[i].month)
                    {
                        temp=a[j].month;
                        a[j].month=a[i].month;
                        a[i].month=temp;

                        temp=a[j].day;
                        a[j].day=a[i].day;
                        a[i].day=temp;
                    }
                if(a[j].year==a[i].year)
                    if(a[j].month==a[i].month)
                        if(a[j].day>a[i].day)
                        {
                            temp=a[j].day;
                            a[j].day=a[i].day;
                            a[i].day=temp;
                        }
            }
        for(int i=0; i<n; i++)
        {
            printf("%d/%d/%d\n",a[i].year,a[i].month,a[i].day);
        }
    }
 if(m==1)
    {
        for(int i=0;i<n; i-=-1)
            for(int j=i+1;j<n;j-=-1)
            {
                if(a[j].year<a[i].year)
                {
                    temp=a[j].year;
                    a[j].year=a[i].year;
                    a[i].year=temp;

                    temp=a[j].month;
                    a[j].month=a[i].month;
                    a[i].month=temp;

                    temp=a[j].day;
                    a[j].day=a[i].day;
                    a[i].day=temp;

                }
                if(a[j].year==a[i].year)
                    if(a[j].month<a[i].month)
                    {
                        temp=a[j].month;
                        a[j].month=a[i].month;
                        a[i].month=temp;

                        temp=a[j].day;
                        a[j].day=a[i].day;
                        a[i].day=temp;
                    }
                if(a[j].year==a[i].year)
                    if(a[j].month==a[i].month)
                        if(a[j].day<a[i].day)
                        {
                            temp=a[j].day;
                            a[j].day=a[i].day;
                            a[i].day=temp;
                        }
            }
        for(int i=0; i<n; i++)
        {
            printf("%d/%d/%d\n",a[i].year,a[i].month,a[i].day);
        }
    }
}

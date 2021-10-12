#include<stdio.h>

int *intersection(int *a, int size_a, int *b, int size_b, int *size_result)
{
    int *x, c = 0;
    x = (int*) malloc(100*sizeof(int));
    for(int i = 0; i<size_a; i++)
    {
        for(int j = 0; j<size_b; j++)
        {
            if(*(a+i)==*(b+j))
            {
                *(x+c) = *(a+i);
                c++;
            }
        }
    }
    int d=0;
    int *y;
    y = (int*) malloc(100*sizeof(int));
    for(int i = 0; i<size_a; i++)
    {
        *(y+d) = *(a+i);
        d++;
    }
    for(int j = 0; j<size_b; j++)
    {
        int flag = 1;
        for(int i=0;i<c;i++)
        {
            if(*(b+j)==*(x+i))
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
           *(y+d) = *(b+j);
           d++;
        }
    }
    int temp;
    for(int i=0; i<=d; i++)
        for(int j=i+1; j<d; j++)
    {
         if(*(y+j)==*(y+i))
        {
            *(y+j)=1001;
            d--;
            for(int m=j+1;m<=d;m++)
            {
                *(y+j)=*(y+m);
                *(y+m)=*(y+(m+1));
            }

        }
        if(*(y+j)<*(y+i))
        {
            temp=*(y+i);
            *(y+i)=*(y+j);
            *(y+j)=temp;
        }
    }
    printf("length of union set: %d\n",d);
    printf("union of two sets : ");
    for(int i=0; i<d; i++)
    {
        if(*(y+i)<1000)
         printf("%d ", *(y+i));
    }
    }


int main()
{
    int *a, size_a, *b, size_b, size_result;
    printf("Please enter your first array Size : ");
    scanf("%d", &size_a);
    a = (int*) malloc(size_a*sizeof(int));
    printf("Please enter your first array elements (Numbers) :\n");
    for(int i = 0; i<size_a; i++)
        scanf("%d", a+i);
    printf("Please enter your second array Size : ");
    scanf("%d", &size_b);
    b = (int*) malloc(size_b*sizeof(int));
    printf("Please enter your second array elements (Numbers) :\n");
    for(int j = 0; j<size_b; j++)
        scanf("%d", b+j);
    intersection(a, size_a, b, size_b, &size_result);
    return 0;
}

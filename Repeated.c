#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int size_of_srting;
char * repeated(char *input)
{
    char * output;
    output = (char*)malloc(size_of_srting);
    int k=0;
    for(int i=0; i<size_of_srting; i++)
    {
        for(int j=i+1; j<size_of_srting; j++)
        {
            if(i!=j)
            {
                if((char)(input[i])==(char)(input[j]))
                   {
                       (output[k])=(input[i]);
                        k++;
                        if(k>=2)
                        {
                           for(int m=k;m>=1;m--)
                            for(int n=m-1;n>=0;n--)
                            if((char)(output[m])==(char)(output[n]))
                           {
                               output[m]=NULL;
                               k--;
                           }
                        }
                   }
            }
        }
    }
            for(int i=0; i<k; i++)
            printf("%c",(output[i]));
}

int main()
{
    char *input;
    input = (char*) malloc(200*sizeof(char));
    printf("Please enter your string : ");
    gets(input);
    size_of_srting=strlen(input);
    printf("Repeated Characters : ");
    repeated(input);
}

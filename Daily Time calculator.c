#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
    int mili_sec;
};
struct time time[30];
int main()
{
  FILE* fptr;
  char filename[50];
  printf("please enter the name of input file: ");
  scanf("%s",filename);
  fptr = fopen(filename,"rb");
  if (fptr == NULL)
  {
    printf("Cannot open %s\n",filename);
    return -1;
  }
  int i=0;
  int i_taker;
  while(i!=-1)
  {
      fread(&time[i],sizeof(struct time),1,fptr);
      if(fread(&time[i],sizeof(struct time),1,fptr)!=1)
      {
        i_taker=i;
        i=-1;
      }
      i++;
  }
  int temp;
  int average_hour,average_min,average_sec,average_milsec;
  long long int total_average;
  long long int hour_sum=0,min_sum=0,sec_sum=0,milsec_sum=0;
  for(int i=0;i<i_taker;i++)
  {
      hour_sum=hour_sum+time[i].hour;
      min_sum=min_sum+time[i].min;
      sec_sum=sec_sum+time[i].sec;
      milsec_sum=milsec_sum+time[i].mili_sec;
  }
  min_sum=min_sum+(hour_sum*60);
  sec_sum=sec_sum+(min_sum*60);
  milsec_sum=milsec_sum+(sec_sum*1000);
  total_average=milsec_sum/i_taker;
  average_hour=(int)total_average/(60*60*1000);
  average_min=(int)(total_average%(60*60*1000))/(60*1000);
  average_sec=(int)((total_average%(60*60*1000))%(60*1000))/(1000);
  average_milsec=(int)((total_average%(60*60*1000))%(60*1000))%(1000);
  printf("the average clock : %d : %d : %d : %d\n",average_hour,average_min,average_sec,average_milsec);
  for(int i=0;i<i_taker;i-=-1)
    for(int j=i+1;j<i_taker;j-=-1)

  {
      if(time[i].hour<time[j].hour)
      {
          temp=time[j].hour;
          time[j].hour=time[i].hour;
          time[i].hour=temp;

          temp=time[j].min;
          time[j].min=time[i].min;
          time[i].min=temp;

          temp=time[j].sec;
          time[j].sec=time[i].sec;
          time[i].sec=temp;

          temp=time[j].mili_sec;
          time[j].mili_sec=time[i].mili_sec;
          time[i].mili_sec=temp;
      }
      if(time[i].hour==time[j].hour)
              if(time[i].min<time[j].min)
      {
          temp=time[j].min;
          time[j].min=time[i].min;
          time[i].min=temp;

          temp=time[j].sec;
          time[j].sec=time[i].sec;
          time[i].sec=temp;

          temp=time[j].mili_sec;
          time[j].mili_sec=time[i].mili_sec;
          time[i].mili_sec=temp;
      }
      if(time[i].hour==time[j].hour)
              if(time[i].min==time[j].min)
                   if(time[i].sec<time[j].sec)
      {
          temp=time[j].sec;
          time[j].sec=time[i].sec;
          time[i].sec=temp;

          temp=time[j].mili_sec;
          time[j].mili_sec=time[i].mili_sec;
          time[i].mili_sec=temp;
      }
      if(time[i].hour==time[j].hour)
              if(time[i].min==time[j].min)
                   if(time[i].sec<time[j].sec)
                        if(time[i].mili_sec==time[j].mili_sec)
      {
          temp=time[j].mili_sec;
          time[j].mili_sec=time[i].mili_sec;
          time[i].mili_sec=temp;
      }
  }
   printf("maximum clock: %d : %d : %d : %d\n",time[0].hour,time[0].min,time[0].sec,time[0].mili_sec);
   printf("minimum clock: %d : %d : %d : %d\n",time[i_taker].hour,time[i_taker].min,time[i_taker].sec,time[i_taker].mili_sec);
}

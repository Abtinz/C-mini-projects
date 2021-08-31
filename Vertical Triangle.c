#include<stdio.h>
#include<math.h>
#include <stdbool.h>

bool triFounder(int x1, int y1,int x2, int y2, int x3, int y3);
bool recFounder(int x1, int y1,int x2, int y2, int x3, int y3,int x4, int y4);

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("first spot : (x,y)\n");
    scanf("%d %d",&x1,&y1);
    printf("second spot : (x,y)\n");
    scanf("%d %d",&x2,&y2);
    printf("third spot : (x,y)\n");
    scanf("%d %d",&x3,&y3);
    printf("fourth spot : (x,y)\n");
    scanf("%d %d",&x4,&y4);
    if (recFounder(x1,y1,x2,y2,x3,y3,x4,y4)==true){
        printf("True ! you can make a vertical triangle whit these spots");
    } else{
        printf("False ! you cant make a vertical triangle whit these spots");
    }
}
bool triFounder(int x1, int y1,int x2, int y2, int x3, int y3){
    if (pow((x3-x2),2) +pow((y3-y2),2) == pow((x2-x1),2) + pow((y2-y1),2) +pow((x3-x1),2) + pow((y3-y1),2)){
        return true;
    } else{
        return false;
    }
}
bool recFounder(int x1, int y1,int x2, int y2, int x3, int y3,int x4, int y4){
    if (triFounder(x1,y1,x2,y2,x3,y3)==true && triFounder(x4,y4,x2,y2,x3,y3)==true && triFounder(x2,y2,x1,y1,x4,y4)==true && triFounder(x3,y3,x1,y1,x4,y4)==true){
        return true;
    }
    else if (triFounder(x1,y1,x2,y2,x4,y4)==true && triFounder(x4,y4,x1,y1,x3,y3)==true && triFounder(x2,y2,x1,y1,x3,y3)==true && triFounder(x3,y3,x2,y2,x4,y4)==true){
        return true;
    }
    else if (triFounder(x1,y1,x4,y4,x3,y3)==true && triFounder(x4,y4,x2,y2,x1,y1)==true && triFounder(x2,y2,x4,y4,x3,y3)==true && triFounder(x3,y3,x2,y2,x1,y1)==true){
        return true;
    }
    else{
        return false;
    }
}

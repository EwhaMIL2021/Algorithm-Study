#include <stdio.h>
int main(){
    int year;
    int y1,y2,y3;
    scanf("%d",&year);
    
    y1=year%4;
    y2=year%400;
    y3=year%100;
    

    if (y2==0)
        printf("1"); //1. 400의 배수일 때
    else if (y1==0 && y3!=0)
        printf("1"); //2. 4의 배수이지만 100의 배수는 아닐 때
    else 
        printf("0"); //나머지. 400의 배수가 아니고, 4의 배수이면서 100의 배수(ex.100,200,300,..)

}
#include <stdio.h>
#include <string.h>

int main(){
    char ch1[4],ch2[4];
    scanf("%s",ch1);
    scanf("%s",ch2);
    
    int temp;
    temp=ch1[0];
    ch1[0]=ch1[2];
    ch1[2]=temp;
    
    temp=ch2[0];
    ch2[0]=ch2[2];
    ch2[2]=temp;
    
    if (strcmp(ch1,ch2)>0)
        printf("%s",ch1);
    else
        printf("%s",ch2);
    
}
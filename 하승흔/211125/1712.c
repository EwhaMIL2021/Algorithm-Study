#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    
    int min;
    min=A/(C-B)+1;
    
    if (C>B) printf("%d",min);
    else printf("-1");
    
}
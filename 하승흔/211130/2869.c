#include <stdio.h>

int main(){
    int A,B,V;
    scanf("%d %d %d",&A,&B,&V);
    
    int days;
    if (A==V) printf("%d",1);
    else{
        days=(V-A)/(A-B);
        if ((V-A)%(A-B)) days=days+1;
        printf("%d",days+1);
        }
}
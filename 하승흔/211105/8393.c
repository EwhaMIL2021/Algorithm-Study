#include <stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    
    //n=n*(n+1)/2;

    int sum=0;
    
    for (int i=0;i<=n;i++)
        sum=sum+i;
    
    printf("%d",sum);
    
}
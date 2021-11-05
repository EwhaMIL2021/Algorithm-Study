#include <stdio.h>
int main(){
    int N,X;
    scanf("%d %d",&N,&X);
    
    int a[N];
    
    for(int i=1;i<=N;i++){
        scanf("%d",&a[i]);
        
        if (a[i]<X)
            printf("%d ",a[i]);
    }
}
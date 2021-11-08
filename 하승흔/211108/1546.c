#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    float score[1000]={0,};
    int M=0;
    
    for (int i=0;i<N;i++){
        scanf("%f",&score[i]);
        
        if (M<score[i])
            M=score[i];
        
    }
    float sum=0;
    
    for (int i=0;i<N;i++){

        sum=sum+(100*score[i]/M);
    }
    sum=sum/N;
    printf("%f",sum);
}
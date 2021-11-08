#include <stdio.h>
int main()
{
    int C;
    scanf("%d",&C);
    
    int N;
    int score[1000];

    for(int i=0;i<C;i++){
        
        int sum=0;
        float avg;
        int num=0;
        scanf("%d",&N);
        
        for (int j=0;j<N;j++){
            scanf("%d",&score[j]);
            sum+=score[j];
        }
        avg=sum/N; //평균
        for (int j=0;j<N;j++){
            if (avg<score[j])
                num+=1;
        }
        printf("%.3f%\n",(float)100*num/N);
    }
}
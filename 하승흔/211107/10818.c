# include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
   
    int max,min,a;
    min=1000001;max=-1000001;
    
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        if (max<a)
            max=a;
        if (min>a)
            min=a;
    }
    
    printf("%d %d",min,max);
}
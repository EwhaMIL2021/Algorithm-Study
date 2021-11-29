# include <stdio.h>

int main(){
    int X;
    scanf("%d",&X);
    int a,b; //a:분자, b:분모
    
    int N=0;
    int before;
    int i=1;
    if (X==1){printf("1/1");}
    else{
        while(1){
            before=i;
            N+=i;
            i++;
            if (X<=N) break;
        }
        
        if (i%2!=0){ //홀수
            for(int j=0;j<(N-X+1);j++) {
                a=before-j;b=j+1;
            }}
        else { //짝수
            for(int j=0;j<(N-X+1);j++) {
                a=j+1;b=before-j;            
            }}
    
        printf("%d/%d",a,b);}
}
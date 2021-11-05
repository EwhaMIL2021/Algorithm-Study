#include <stdio.h>
int main(){
    int N,M;
    scanf("%d",&N);
    M=N;
    
    int a,b,c,d,new;
    int k=0;
       
    while(1){
        k++;
        a=M/10; //N의 십의 자리
        b=M%10; //N의 일의 자리
    
        new=a+b;
 
        c=new/10; //new의 십의 자리
        d=new%10; //new의 일의 자리
    
        new=10*b+d;
        if (new==N) break;
        M=new;
    }
    
    printf("%d",k);
}
# include <stdio.h>
int main(){
    
    int H,M;
    scanf("%d %d",&H,&M);

    if (M>=45){
        M=M-45;
        printf("%d %d",H,M);
    }
        
    else{
        if(H==0)
            H=23;
        else                
            H=H-1;
        M=45-M;
        M=60-M;
        printf("%d %d",H,M);
    }
}
#include <stdio.h>
int main()
{
    int A,B,C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    
    int mult,i;
    mult=A*B*C;
    
    int num[9]={100,100,100,100,100,100,100,100,100};
    int k=1;
    
    for (i=0;i<7;i++){

        num[i]=(mult/k)%10;
        k=k*10;
        
    }
    
    if (mult/k!=0) {
        num[7]=(mult/k)%10; 
        k=k*10;
        if (mult/k!=0) {
        num[8]=(mult/k)%10; }
    }  


    int number[10]={0,0,0,0,0,0,0,0,0,0};
    
    for(i=0;i<9;i++){
        switch (num[i]){
            case 0: //0의 개수
                number[0]+=1; 
            break;
                
            case 1:
                number[1]+=1;
            break;
                
            case 2:
                number[2]+=1;
            break;
                
            case 3:
                number[3]+=1;
            break;
                
            case 4:
                number[4]+=1;
            break;
                
            case 5:
                number[5]+=1;
            break;
                
            case 6:
                number[6]+=1;
            break;
                
            case 7:
                number[7]+=1;
            break;
                
            case 8:                
                number[8]+=1;
            break;
                
            case 9:
                number[9]+=1;
            break;
                
            default: break;
          }          
             
}
    for(i=0;i<10;i++)
        printf("%d\n",number[i]);
}
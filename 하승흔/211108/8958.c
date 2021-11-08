#include <string.h> 

int main(){
    
    int N;
    scanf("%d",&N);
    
    char result[80];
    int n;
    int temp=0;
    int score=0;
    
    for (int i=0;i<N;i++){
               
        scanf("%s",&result);
        n=strlen(result);
        
        for(int j=0;j<n;j++){
           if (result[j]=='O') {
               temp+=1;
               score=score+temp;}
           else if (result[j]=='X')
               temp=0;
                   
        }
        printf("%d\n",score);
        score=0;temp=0;
    }
}
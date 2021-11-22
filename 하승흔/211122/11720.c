#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); 
    
    char ch[N];
    scanf("%s",&ch);
    
    int sum=0;
    
    for(int i=0;i<N;i++){
        sum+=ch[i]-'0';
    }
    
    printf("%d",sum);
}
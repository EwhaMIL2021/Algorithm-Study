#include <stdio.h>


int main(){
    char ch[101];
    scanf("%s",ch);
    
    int alp[26];
    
    for(int i=0;i<26;i++){
        alp[i]=-1;
    }
    
    int j=0;
    int index;
    
    while(ch[j]!='\0'){ //배열의 인덱스가 NULL이 아니라면 반복
        
        index=(int)ch[j]-97;
        
        if (alp[index]==-1) alp[index]=j; 
        j++; }


    for(int i=0;i<26;i++){
        printf("%d ",alp[i]);  
    }
}
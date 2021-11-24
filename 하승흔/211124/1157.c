#include <stdio.h>
#include <string.h>

int main(){
    char ch[1000000];
    scanf("%s",ch);
    int alp[26]={0,};
    
    int index,len;
    len=strlen(ch);
    
    for(int i=0;i<len;i++){
        if (ch[i]<'a') 
            index=ch[i]-'A';
        else 
            index=ch[i]-'a';
        alp[index]++;
    }
    
    int max=alp[0];
    int select=0;
    for(int i=1;i<26;i++){
        if (max<alp[i]){ 
            max=alp[i];
            select=i;}
    }
    int result=0;
    for(int i=0;i<26;i++){
        if (max==alp[i])
            result++;
    }
    
    if (result>1)
        printf("?");
    else
        printf("%c",select+'A');  
    
}
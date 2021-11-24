#include <stdio.h>
#include <string.h>

int main(){
    char ch[1000001];
    scanf("%[^\n]",ch);
    
    int len;
    len=strlen(ch);
    if (ch[0]==' '&&len==1)
        printf("0");
    else {
    int count=1;
    
    if (ch[0]==' '){        
        for(int i=1;i<len;i++)
            ch[i-1]=ch[i];
        ch[len-1]='\0';
        len=strlen(ch);
    }
    if(ch[len-1]==' '){
        ch[len-1]='\0';
        len=strlen(ch);
    }
        
    for(int i=0;i<len;i++){
        if (ch[i]==' ') count++;
    }
    
        printf("%d",count);}
}
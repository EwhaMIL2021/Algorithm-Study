#include <stdio.h>
#include <string.h>
int main(){
    char ch[101];
    scanf("%s",ch);
    
    int len;
    len=strlen(ch);
    int result;
    result=len;
    for(int i=1;i<len;i++){
        switch(ch[i]){
            case '-':
                result--;break;
            case '=':
                if (ch[i-2]=='d'&&ch[i-1]=='z'){
                result-=2; break;    }
                else {result--;break;}
            case 'j':
                if (ch[i-1]=='l'||ch[i-1]=='n'){
                result--;break;    }
        }
    }
    printf("%d",result);
}
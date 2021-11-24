#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d",&N);
    char ch[101];
    int result=N;

    int len;
    for(int i=0;i<N;i++){ //단어의 개수 N
        scanf("%s",ch); //단어 1개 입력
        len=strlen(ch);
        int check=0;
        
        //해당 단어가 그룹단어인지 판단
        for(int j=0;j<len-2;j++){
            if(ch[j]!=ch[j+1]){
                for(int k=j+2;k<len;k++){
                    if(ch[j]==ch[k])
                    {check++;
                    break;}
                }
                  
            }
            if(check>0) {result--; break;}
        }
    }
    printf("%d",result);
}
#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int cnt=1;
    int x=1; //누적된 벌집의 수
    
    while(1){
        if(N-x<=0) break; //N이 누적된 벌집의 수(x)보다 작거나 같을 경우

        //cnt번째에 생성된 방의 갯수 빼기
        N-=x;
        
        //다음 번째에 생성된 방의 갯수 계산
        x=cnt*6;
        
        //cnt증가
        cnt++;
    }
    printf("%d",cnt);
}
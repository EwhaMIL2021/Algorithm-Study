#include <stdio.h>
int main()
{
    int a[10];
    
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        a[i]=a[i]%42;
    }
    
    
    int count[43]={0,};
    
    for (int i=0;i<10;i++) 
    {

        for(int j=0;j<42;j++){
            if (a[i]==j)
                count[j]+=1;
        }
    }
    for (int i=0;i<42;i++){
        if (count[i]!=0) 
            count[43]+=1;}
    printf("%d",count[43]);
}
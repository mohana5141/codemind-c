#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++){
        int temp=i;
        int rev=0;
        while(temp!=0){
           int d=temp%10;
           rev=rev*10+d;
           temp/=10;
         }if(rev==i && rev!=0){
             printf("%d ",i);
         }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
}
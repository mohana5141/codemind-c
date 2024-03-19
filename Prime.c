#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int i;
   int cnt=0;
   for(i=1;i<=n/2;i++){
       if(n%i==0){
           cnt++;
       }
   }
    if(cnt>1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    
    
    
    
    
}
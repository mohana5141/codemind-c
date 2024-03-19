#include <stdio.h>
int main()
{
   int a,b,max;
   scanf("%d %d",&a,&b);
   int res=(a>b)?a:b;
   while(1){
    if(res%a==0 && res%b==0){
        printf("%d",res);
        break;
    }
    ++res;
    
    
    
    
  }
    
}
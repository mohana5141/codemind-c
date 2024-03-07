#include <stdio.h>
#include <math.h>
int main()
{
   int x,y,p;
   scanf("%d %d %d",&x,&y,&p);
   int a=abs(x-y);
   int b=a/p;
   if(a%2==0 && b%2==0 || x==y){
       printf("YES");
   }
   else{
       printf("NO");
   } 
    
    
    
    
    
    
}
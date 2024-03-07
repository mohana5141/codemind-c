#include <stdio.h>
#include <math.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int c=abs(a-b);
   int d=(c/10)+1;
   if(a==b ){
       printf("0");
       
   }
    else if(c%10==0){
        printf("%d",c/10);
    }
    else{
        printf("%d",d);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
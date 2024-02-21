#include <stdio.h>
int main()
{
   char s[100];
   scanf("%[^
]%c",&s);
   int i,upr=0;
   for(i=0;s[i]!=NULL;i++){
       if(s[i]>='A' && s[i]<='Z'){
           upr++;
       }
   }
    printf("%d",upr);
    
    
    
    
    
    
    
    
    
}
#include <stdio.h>
int main()
{
   char s[100];
   scanf("%[^
]%c",&s);
   int i,lwr=0;
   for(i=0;s[i]!=NULL;i++){
       if(s[i]>='a' && s[i]<='z'){
           lwr++;
       }
   }
    printf("%d",lwr);
    
    
    
    
    
    
    
    
    
}
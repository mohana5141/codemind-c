#include <stdio.h>
#include <string.h>
int main()
{
   char str[101];
   scanf("%[^\n]%c",&str);
   int len =strlen(str);
   int i,ch=0;
   for(i=0;i<len;i++){
       if(str[i]>='a' && str[i]<='z'){
           ch++;
       }
       else if(str[i]>='A' && str[i]<='Z'){
           ch++;
       }
   }
    printf("%d",ch);
    
    
    
    
    
    
    
    
    
}

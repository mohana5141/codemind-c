#include <stdio.h>
#include <string.h>
int main()
{
   char str[101];
   scanf("%[^
]%c",&str);
   int len =strlen(str);
   char ch=str[0];
   for(int i=1;i<len;i++){
       if(str[i]>ch){
           ch=str[i];
        
      }
  }  printf("%c",ch);
    
    
    
    
    
    
    
    
    
}
#include <stdio.h>
#include <string.h>
int main()
{
  char str[1001];
  scanf("%s",&str);
  int len=strlen(str);
  int flag=0,i;
  for(i=0;i<=len/2;i++){
      if(str[i]!=str[len-1-i]){
          flag=1;
      }
  }
    if(flag==1){
        printf("Not Palindrome");
    }
    else{
        printf("Palindrome");
    }
    
    
    
    
    
    
    
    
    
}
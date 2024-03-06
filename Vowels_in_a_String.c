#include <stdio.h>
int main()
{
  char str[1001];
  scanf("%[^
]%c",str);
  char ch;
  scanf("%c",&ch);
  char found=0,i;
  for(i=0;str[i]!=NULL;i++){
      if(str[i]==ch){
          
          
          found=1;
          break;
      }
  }
    if(found){
        printf("True
");
        printf("%d",i);
    }
    else{
        printf("False");
    }
    
    
    
    
    
    
    
    
    
}
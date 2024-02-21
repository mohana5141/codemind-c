#include <stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]%c",&str);
    int i,lwr=0;
    for(i=0;str[i]!=NULL;i++){
        if(str[i]>='a'&& str[i]<='z'){
            lwr++;
        }
    }
    printf("%d",lwr);
    
    
    
    
    
    
    
    
    
}
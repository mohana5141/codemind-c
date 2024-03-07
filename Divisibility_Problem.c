#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a/b)+1;
    int d=(b*c)-a;
    if(a>b && a%b!=0){
        printf("%d",d);
    }
    else if(b>a){
        printf("%d",b-a);
    }
    else{
        printf("0");
    }
    
    
    
    
    
    
    
    
}
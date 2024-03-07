#include <stdio.h>
int main()
{
    float a,b,x,y;
    scanf("%f %f %f %f",&a,&b,&x,&y);
    float c=(a/x);
    float d=(b/y);
    if(d<c){
        printf("Jesse");
    }
    else if(c<d){
        printf("Walter");
    }
    else{
        printf("Both");
    }
    
    
    
    
    
    
    
    
    
    
}
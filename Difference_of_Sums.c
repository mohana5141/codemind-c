#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   scanf("%d",&n);
   int s1=(n*(n+1)*(2*n+1))/6;
   int s2=n*(n+1)/2;
   int s3=pow(s2,2);
    int d=abs(s3-s1);
    printf("%d",d);
    
    
    
    
    
    
    
    
    
}
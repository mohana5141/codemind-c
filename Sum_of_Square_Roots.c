#include <stdio.h>
#include <math.h>
int main()
{
  int a,b;
  float square=0;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++){
       square+=sqrt(i);
  }
    
    printf("%.2f",square);
    
    
    
    
    
    
    
    
    
}
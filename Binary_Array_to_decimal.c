#include <stdio.h>
#include <math.h>
int main()
{
  int n,digit=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }int d=n-1;
   for(int i=0;i<n;i++){
      int temp=arr[i]*pow(2,d);
      
          digit+=temp;
        d--;
   } 
    printf("%d",digit);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
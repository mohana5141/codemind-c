#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int p=0;
  for(int i=1;i<=n/2;i++){
     if(n%i==0){
         p+=i;
     } 
  }
    if(p==n){
        printf("PERFECT");
    }
    if(p<n){
        printf("DEFICIENT");
    }
    if(p>n){
        printf("ABUNDANT");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
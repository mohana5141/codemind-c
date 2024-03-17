#include <stdio.h>
int main()
{
  int n,flag;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
   for(int i=0;i<n;i++){
       if(arr[i]>=2){
           flag=1;
           break;
       }
       else{
          flag=0;
       }
   } 
    if(flag==0){
        printf("True");
    }
    else{
        printf("False");
    }
    
    
    
    
    
    
    
    
    
    
    
}
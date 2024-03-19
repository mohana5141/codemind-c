#include <stdio.h>
int main()
{
  int arr[3],brr[3];
  int a=0,b=0;
  int i;
  for(i=0;i<3;i++){
      scanf("%d",&arr[i]);
  }
  for(i=0;i<3;i++){
      scanf("%d",&brr[i]);
    }
   for(i=0;i<3;i++){
          if(arr[i]>brr[i]){
		  
          a++;
         }else if(arr[i]==brr[i]){
            continue; 
         }
         else{
             b++;
         } 
         
    } 
    printf("%d %d",a,b);
    
    
    
    
    
    
    
    
    
    
    
}












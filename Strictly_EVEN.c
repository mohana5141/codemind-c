#include <stdio.h>
int main()
{
   int n,i,min=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
     for(i=0;i<n;i++){
        if(i%2!=0 && arr[i]%2==0){
            min++;
        }
        
    }
      if(min>=1){
          printf("False");
      }
      else{
          printf("True");
      }
}
    

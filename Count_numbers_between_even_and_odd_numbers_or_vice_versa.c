#include <stdio.h>
int main()
{
   int n,i,min=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
     for(i=0;i<n-2;i++){
        if(arr[i]%2!=0 && arr[i+2]%2==0 ||arr[i+2]%2!=0 && arr[i]%2==0){
            min++;
        }
        
    }
      printf("%d",min);
      
}
    

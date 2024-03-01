#include <stdio.h>
#include <math.h>
int main()
{
  int n,i,cnt=0,sum=0,avg;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
        sum+=arr[i];
    } 
   avg = sum/n;
    for(i=0;i<n;i++){
        if(arr[i]<=avg){
            cnt++;
        }
    }
    printf("%d",cnt);
    
    
    
    
    
    
    
}

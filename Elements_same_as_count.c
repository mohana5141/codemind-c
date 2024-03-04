#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  int freq[10]={0};
  for(int i=0;i<n;i++){
      freq[arr[i]-0]++;
  } 
    int m=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<10;j++){
     if(arr[i]==freq[j] && j==arr[i]){
        printf("%d ",arr[i]);
        freq[j]=0;
        m++;
      } 
   
    } 
        
  }
    if(m==0){
        printf("-1");
    }
    
}
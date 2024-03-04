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
    int x=0;
    int y=arr[0];
    for(int i=0;i<n;i++){
       for(int j=0;j<10;j++){
          if(arr[i]==freq[j] && j==arr[i]){
              if(arr[i]>x)x=arr[i];
              if(arr[i]<y)y=arr[i];
              freq[j]=0;
              m++;
          } 
       } 
        
        
        
        
    }
    if(m==0){
        printf("-1");
    }
    else{
        printf("%d %d",y,x);
    }
}
#include <stdio.h>
int main()
{
  int m,n,i,j;
  scanf("%d %d",&m,&n);
  int arr[m][n],brr[m][n],add[m][n];
  for(i=0;i<m;i++){
      for(j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
      }
  }int p,q;
   scanf("%d %d",&p,&q);
  for(i=0;i<p;i++){
      for(j=0;j<q;j++){
      scanf("%d",&brr[i][j]);
      }
  }
  
  for(i=0;i<m;i++){
      for(j=0;j<n;j++){
       add[i][j]=arr[i][j]+brr[i][j]; 
      }
  }
  for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          
         printf("%d ",add[i][j]); 
          
      }
       printf("
");
  }
  
  
  
  
  
  
  
  
  
} 
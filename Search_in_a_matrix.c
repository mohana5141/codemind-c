#include <stdio.h>
int main()
{
   int m,n,i,j;
   scanf("%d
%d",&m,&n);
   int arr[m][n];
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          scanf("%d",&arr[i][j]);
      } 
       
       
   }
    int k,flag;
    scanf("%d",&k);
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          if(arr[i][j]==k){
              flag=1;
          }
      } 
       
       
   }
   if(flag==1){
       printf("1");
   }
   else{
       printf("0");
   }
   
    
    
    
    
    
    
    
    
    
    
    
}








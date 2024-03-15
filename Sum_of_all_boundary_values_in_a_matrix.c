#include <stdio.h>
int main()
{
  int a,b,i,j;
  scanf("%d %d",&a,&b);
  int arr[a][b];
  for(i=0;i<a;i++){
      for( j=0;j<b;j++){
          scanf("%d",&arr[i][j]);
      }
   
     }int sum=0;
     for(i=0;i<a;i++)
     {
       for(j=0;j<b;j++){
           if(i==0||j==0||i==a-1||j==b-1){
             sum+=arr[i][j];  
           }
       }  
         
         
         
         
     }
    printf("%d",sum);
    
    
    
    
    
    
    
    
    
    
    
    
    
}
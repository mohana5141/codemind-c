#include <stdio.h>
int main()
{
  int w,x,y,z;
  scanf("%d %d %d %d",&w,&x,&y,&z);
  if(w==x ||w==y|| w==z){
      printf("YES");
  }
  else if(x+y==w ||y+z==w ||z+x==w){
      printf("YES");
  }  
   else{
       printf("NO");
   } 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
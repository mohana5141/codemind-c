#include <stdio.h>
int main()
{
  int n,a,b,i,j;
  scanf("%d
",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    int cnt=0;
    for(j=a;j<=b;j++){
        int res=j%10;
        if(res==2 ||res==3||res==9){
            cnt++;
        }
    }
       printf("%d
",cnt);
    
    }
    
    
    
    
    
    
    
    
    
    
    
}
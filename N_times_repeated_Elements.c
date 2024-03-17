#include <stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int re,cnt=0;
   scanf("
%d",&re);
   int frq[10]={0};
    for(i=0;i<n;i++){
    	frq[arr[i]]++;
	}
	for(i=0;i<n;i++){
	
	if(frq[arr[i]]==re){
		
    	printf("%d ",arr[i]);
    	frq[arr[i]]=0;
	  }
	else{
	  cnt++;
	}
}    if(cnt==n){
    printf("-1");
     }
	    
}











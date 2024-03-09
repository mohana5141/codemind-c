#include <stdio.h>
int main()
{   
    int n,i,j;
    scanf("%d",&n);
    int arr[n],brr[n];
	for(i=0;i<n;i++){
	 	scanf("%d",&arr[i]);
	 }
	 //taking another ARRAY  TO REVERSE THE ARRAY	
/*	for(i=n-1;i>=0;i--){
		brr[j]=arr[i];
		j++;
		}
		for(i=0;i<n;i++){
		printf("%d ",brr[i]);
        }
}*/	
   /* for(i=0;i<n;i++){
    	brr[i]=arr[n-1-i];
	}
	 for(i=0;i<n;i++){
       printf("%d",brr[i]);
	}
}*/  
      
    for(i=0;i<n/2;i++){
    int t=arr[n-1-i];
    arr[n-1-i]=arr[i];
    arr[i]=t;
    	
	}	
   for(i=0;i<n;i++){
   	printf("%d",arr[i]);
   }



}
	
	
	


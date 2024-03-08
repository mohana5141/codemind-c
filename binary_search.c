#include <stdio.h>
/*int binary_search(int *arr,int n,int key){
	int i,low;
	int high;
	low=0;
	high =n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==key){
		  return mid;	
		}
		else if(arr[mid]>key){
			high=mid-1;
		}
		 else{
		 
		
			low=mid+1;
		}
	     
	}
	    return -1;
}*/
int binary_search(int *arr,int n,int key,int low,int high){
	if(low>high){
		return -1;
	}
	else{
		int mid = (low+high)/2;
		if(arr[mid]==key)return mid;
		else if(arr[mid]>key)
		 binary_search( arr, n, key,low, mid-1);
		else
		 binary_search( arr, n, key,mid+1, high);
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
}









int main(){
	int n,i,key;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
    int result =binary_search(arr,n,key,0,n-1);	
	printf("%d",result);
	
	
	
	
	
	
	
	
	
	
	
}












#include <stdio.h>
void print_arr(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	
}
//sub-routine 
void merge(int *arr,int l,int m,int h){
	int i=l,j=m+1,k=0;
	int result[h-l+1];
	while(i<=m && j<=h){
		if(arr[i]<=arr[j]){
			result[k]=arr[i];
			i++;
			k++;
		}
		  else{
			result[k]=arr[j];
			
			j++;
			k++;
		}
	}
	while(i<=m){
		result[k]=arr[i];
		i++;
		k++;
	}
	while(j<=h){
		result[k]=arr[j];
		j++;
		k++;
	}
	k=0;
	for(i=l;i<=h;i++){
		arr[i]=result[k];
		k++;
	}
}

void merge_sort(int *arr,int l,int h){
	if(l<h){
	int m=(l+h)/2;
	merge_sort(arr,l,m);
 	merge_sort(arr,m+1,h);
    merge(arr,l,m,h);
	}
	
	
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting");
	print_arr(arr,n);
	//merge sort function call goes here
	merge_sort(arr,0,n-1);
	
	printf("after sorting");
	print_arr(arr,n);
	return 0;
	
	
	
	
	
	
}

int linear_search(int arr[],int i,int n,int k){
	if(i==n){
		return -1;
	}
	 if(arr[i]==k){
	 return i;
	}
	linear_search(arr,i+1,n,k);  
	
	
	
	
}
int main()
{
   int arr[5]={10,20,30,40,50};
   int key;
   scanf("%d",&key);
   printf("%d",linear_search(arr,0,5,key));	
}


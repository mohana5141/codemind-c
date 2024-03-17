#include <stdio.h>
int main()
{
   int n,fnd;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
    int freq[10]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int cnt=0;
       for(int i=0;i<n;i++){
           if(freq[arr[i]]==arr[i]){
               cnt++;
               freq[arr[i]]=0;
           }
       } 
    
        
    
    
    printf("%d",cnt);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 3
void display(char array[][30]){
	int i;
	for(i=0;i<size;i++){
		printf(" %s\t",array[i]);
	}
	printf("\n");
}

int main()
{
   int i,j ;
   printf("enter %d strings:",size);
   char array[size][30];
   for(i=0;i<size;i++){
   	scanf("%s",array[i]);
   }	
	printf("Original array:");
	display(array);
	char temp[30];
	//bubble sorting logic
	for(i=0;i<size;i++){
	  for(j=i+1;j<size;j++){
	  	if(strcmp(array[i],array[j])>0){
	  	   strcpy(temp,array[i]);
			strcpy(array[i],array[j]);
			strcpy(array[j],temp); 	
	  	}
	  	
       }
	  	
	  }	printf("sorted array:");
	    display(array);
	    return 0;
		
		
		
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	


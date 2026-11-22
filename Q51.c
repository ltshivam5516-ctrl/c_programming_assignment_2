#include<stdio.h>
int main (){
	
	int a[10],i;
	printf("enter the value of 10 elements of array ");
	for (i=0;i<10;i++){
		
		scanf("%d", &a[i]);
	}
	
	for (i=9;i>=0;i--){
		
		printf("%d ", a[i]);
	}
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}

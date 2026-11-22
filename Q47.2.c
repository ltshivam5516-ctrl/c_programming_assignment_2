#include<stdio.h>
int main(){
	int a[10],b[10],sum[10],i;
	
	for(i=0;i<10;i++){
		printf("enter the value of index %d",i);
		scanf("%d", &a[i]);
		
	}
	
	for(i=0;i<10;i++){
		printf("enter the value of index %d",i);
		scanf("%d", &b[i]);
		
	}
	
	for(i=0;i<10;i++){
		
		sum[i]=a[i]+b[i];
		
	}
	
	printf("sum of the two arrays are \n");
	
	for (i=0;i<10;i++){
		
		printf("%d", sum[i]);
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}

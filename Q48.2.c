#include<stdio.h>
int main(){
	
	int a[10],b[10],temp[10],i;
	for (i=0;i<10;i++){
		printf("enter the value of %d index of a before swap", i);
		scanf("%d", &a[i]);
		
	}
		for (i=0;i<10;i++){
		printf("enter the value of %d index of b before swap ", i);
		scanf("%d", &b[i]);
		
	}
	
	for(i=0;i<10;i++){
		
		temp[i]=a[i];
	}
	
    	for (i=0;i<10;i++){
		a[i]=b[i];
	}
	
		for (i=0;i<10;i++){
	     b[i]=temp[i];

	}
	
	for (i=0;i<10;i++){
	printf("a[%d] after swapping = %d\n ", i,a[i]);
	printf("b[%d] after swapping = %d\n ", i,b[i]);
		
	}
	
	return 0;
	
	
	
	
}

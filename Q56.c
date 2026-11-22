#include<stdio.h>
int main (){
	int a[3][3],b[3][3],sub[3][3],i,j;
	printf("enter the value of 9 elements of a matrix");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			
			scanf("%d", &a[i][j]);
			
		}
		
		printf("\n");
		}
	printf("enter the value of 9 elements of b matrix");
		for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			
			scanf("%d", &b[i][j]);
			
		}
		
		printf("\n");
		} 
	
	
		for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			
		sub[i][j]=a[i][j]-b[i][j];			
		}
		
		printf("\n");
		} 
	

		for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			
			printf("%d ", sub[i][j]);
			
		}
		
		printf("\n");
		} 
	
	return 0;
	    }

#include<stdio.h>
int main (){
	
	int i,j,n;
	printf("enter the value of rows");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		
		for(j=1;j<=5;j++){
			if((i+j)>=6){
				printf("*");
			}
			else {
				printf(" ");
			}
			
			
		} for (j=6;(j-i)!=5;j++){
			
			printf("*");
			
		}
		
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
}

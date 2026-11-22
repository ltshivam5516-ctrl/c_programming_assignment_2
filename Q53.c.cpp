#include<stdio.h>
int main (){
	int i,j,n,m,sum=0;
	printf("enter the value of rows");
	scanf("%d", &n);
	printf("enter the value of columns");
	scanf("%d", &m);
	
	printf("enter the values of elements ");
	int a[n][m];
	for (i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			scanf("%d", &a[i][j]);
		}
		
		printf("\n");
	}
		for (i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("%d", a[i][j]);
		}
		
		printf("\n");
	}
	 
	 	for (i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
		sum=sum+a[i][j];
		}
		
	
	}

printf("%d", sum);

return 0;	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

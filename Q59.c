#include<stdio.h>
int main ()
{
	int a[3][3],i,j,count=0,n;
     printf("enter the number you want to find occurence:");
	 scanf("%d", &n);  
     printf("enter the 9 elements of matrix: ");

	for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
			scanf("%d", &a[i][j]);
			
		}
    }
    
    
		for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
			printf("%d", a[i][j]);
			
		}
		printf ("\n");
	}
	
		for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
		if (a[i][j]==n){
			count++; 
		}
			
		}
		
	}
	 
	 
     printf("%d", count);	
	
	
	
	return 0;
	
}

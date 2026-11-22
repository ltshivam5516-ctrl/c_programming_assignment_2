#include<stdio.h>
int main (){
	int a[3][3],i,j,max,min,maxrow,maxcol,minrow,mincol;
	printf("enter the value of 9 elements");
	for (i=0;i<3;i++){
		
		for (j=0;j<3;j++){
			
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
		for (i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			printf("%d", a[i][j]);
		}
		
		printf("\n");
	}
	 max=a[0][0];
	 min=a[0][0];
	 maxrow=maxcol=0;
	 minrow=mincol=0;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			
			if (a[i][j]>max){
				max=a[i][j];
				maxrow=i;
				maxcol=j;
			}
			
			if (a[i][j]<min){
				min=a[i][j];
				minrow=i;
				mincol=j;
			}
		}
		
	}
	
	printf("maximum element = %d\n and index [%d][%d]", max,maxrow,maxcol);
	printf("minimum element =%d\n and index [%d][%d]", min,minrow,mincol);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

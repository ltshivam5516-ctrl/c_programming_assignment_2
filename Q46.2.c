#include<stdio.h>
int main(){
	int n,i,max,secmax;
	printf("enter the amount of number you want to compare");
	scanf("%d", &n);
	int a[n];
	printf("enter the value of elements of array");
	for (i=0;i<n;i++){
		
		scanf("%d", &a[i]);
		}
		
	max=a[0];
	secmax=a[0];
	
	for (i=1;i<n;i++){
		
		if (a[i]>max){
			secmax=max;
			max=a[i];
		}
		
		else if (a[i]>secmax && a[i]<max){
			
			secmax=a[i];
		}
		
	}	
	
	printf("maximum element = %d\n", max);
	printf("second maximum element = %d\n", secmax);
	
	
	return 0;
	}

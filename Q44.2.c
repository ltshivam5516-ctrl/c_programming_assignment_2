#include<stdio.h>
int main(){
int a[10],i,counteve=0,countodd=0;
for(i=0;i<10;i++){
	printf("enter the value of %d index", i);
scanf("%d", &a[i]);	
	             }
	             
for (i=0;i<10;i++){
	
	if(a[i]%2==0){
		counteve++;
	}
	
	else {
		countodd++;
	}

}	             
	printf("Even numbers are %d",counteve);
	printf("odd numbers are %d", countodd);
	





return 0;
}











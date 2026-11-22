#include<stdio.h>
int main(){
  int a[10],i,countpos=0,countneg=0,countzero=0;
  for(i=0;i<10;i++){
  	printf("enter the value of %d index", i);
  	scanf("%d", &a[i]);
  	
  }	
  
  for(i=0;i<10;i++){
  	
  	if(a[i]>0){
  		countpos++;
	  }
  	else if (a[i]<0){
  		countneg++;
	  }
	 else{countzero++;
	 } 
  }
	
	
	printf("positive numbers are %d", countpos);
	printf("negative numbers are %d", countneg);
	printf("zero numbers are %d", countzero);
	
	
	
	
	
	
	return 0;
	
	
	
}

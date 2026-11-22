#include<stdio.h>
int main ()
{
	char s1[100],s2[100],s3[200];
	printf("enter the value of string 1");
	fgets(s1,sizeof(s1),stdin);
	
//	printf("enter the value of string 2");
	fgets(s2,sizeof(s2),stdin);
	
 //	printf("\n length of the string is : %d", (int)strlen(s1));
//	printf("\n length of the string is : %d", (int)strlen(s2));
	
//	strcpy(s3,s1);
	printf("\n copied string is : %s", s3) ;
	
//	strcat(s1,s2);
	printf("\n concatenated string is :%s ", s1 );
	  
//	if (strcmp(s2,s1)==0){
		
		printf("both strings are equal ");
//	}  
//	else {
//		printf ("both strings are not equal");
//	}  
   
   printf("\n reversed string = ");
   for (int i=(int)strlen(s3)-1;i>=0;i--)
   
   {
   	
   	printf("%c", s3[i]);
   }
 	 
    	return 0;
	}

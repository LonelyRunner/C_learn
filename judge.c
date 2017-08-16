#include <stdio.h>

int main(){
	
	int num;
	
	printf("scan a number :");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("The number %d is even numbered",num);
	}else{
		printf("The number %d is odd numbered",num);
	}
	printf("\n");
	
	((num+1)%2 == 0) ? printf("The number %d is even numbered",num+1) : printf("The number %d is odd numbered",num+1);
	
	return 0;
}
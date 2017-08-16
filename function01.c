#include <stdio.h>

//函数申明
int add(int num1,int num2);

int main(){
	int i =5,j=10;
	
	int sum = add(i,j);
	
	printf("sum is %d\n",sum);
	
	return 0;
}

int add(int num1,int num2){
	return num1+num2;
}
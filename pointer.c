#include <stdio.h>

int main(){
	int a;
	//指针必须初始化 且为0
	int *p = 0;
	
	printf("input a number:");
	scanf("%d",&a);
	
	p = &a;
	
	printf("address of a is %p\n",&a);
	printf("address of a is %p\n",p);
	printf("address of a is %d\n",*p);
	
	return 0;
}
#include <stdio.h>

/** 数组 */

int main(){
	
	int i;
	double j = 11.32;
	double balance[10];
	
	for(i=0;i<10;i++){
		balance[i] = i * j;
	}
	
	for(int i=0;i<10;i++){
		printf("Element[%d] = %.2f\n",i,balance[i]);
	}
	
	return 0;
}
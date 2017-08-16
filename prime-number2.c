#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(){
	
	for(int i=2;i<=20;i++){
		BOOL bool = FALSE;
		
		for(int j=2;j<=i/2;j++){
			if(i%j == 0){
				bool = TRUE;
				break;
			}
		}
		
		if(!bool){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
#include <stdio.h>

int main (){
   /* 局部变量定义 */
   int i,j;
   
   for(i=2;i<=20;i++){
	   for(j=2;j<=i/2;j++){
		   if(i%j == 0){
			   printf("%d / %d = %d\n",i,j,i%j);
			   break;
		   }
	   }
	   if(j>i/2){
			printf("%d is a prime\n",i);
		}
   }
 
   return 0;
}
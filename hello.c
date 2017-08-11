#include <stdio.h>

/** #define 预处理器 定义一个常量 此处定义不带分号 */
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
	/** 定义一个常量 GREETING是一个字符串 */
	const char GREETING[6] = {'H','E','L','L','O','\0'};
	int a;
	int b;
	
	int area ;
	
	area = LENGTH * WIDTH;
	
	printf("value of GREETING : %s%c",GREETING,NEWLINE);
	
	printf("value of area : %d",area);
	printf("%c",NEWLINE);
	
	/** &variable 获取变量的地址 */
	printf("变量的地址是: %p\n",&a,&b);
	
	/** %d 占位符:指代数字 */
	printf("variable a's value : %d\n",a);
	
	printf("Hello world");
	return 0;
}
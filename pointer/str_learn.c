#include <stdio.h>
#include <string.h>

int main(){

	char str1[20] = "Hello";
	char str2[20] = {' ','Z','h','e','n','g','!','\0'};
	char str3[20];
	int len = 0;

	//字符串长度
	len = strlen(str1);
	printf("The String str1's length is %d\n", len);

	//连接字符串
	strcat(str1,str2);
	printf("str1 + str2 is %s\n",str1);

	//复制字符串
	strcpy(str3,str1);
	printf("str3 is %s\n",str3);

    return 0;

	
}
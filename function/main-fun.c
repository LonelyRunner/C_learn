#include <stdio.h>

//main函数  引用外部函数和内部函数

//申明外部函数
extern void print(char str[]);

extern void enter(char str[]);

//申明一个内部使用函数
static int get_str_length(char str[]);

static void delete_str_ch(char str[],char ch);

int main(){

	char str[100],ch;

	enter(str);

	printf("please input ready to delete char : \n");

	scanf("%c",&ch);

	delete_str_ch(str,ch);

	print(str);

	int length = get_str_length(str);
	printf("%d\n", length);

	return 0;

}

static int get_str_length(char str[]){
	int i = 0;

	do{
		i = i + 1;
	}while(str[i] != '\0');

	return i-1;
}

static void delete_str_ch(char str[],char ch){
	int i,j;
	for(i=j=0;str[i]!='\0';i++){
		if(str[i]!=ch){
			str[j++]=str[i];
		}else{
			str[j]='\0';
		}	
	}	
}
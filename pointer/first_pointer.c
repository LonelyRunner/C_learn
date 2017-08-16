#include <stdio.h>
#include <string.h>

const int MAX = 4;

int main(){

	int var = 20;
	int *ip = NULL;

	ip = &var;

	printf("Address of var variable :%x\n", &var);

	printf("Address of var variable :%x\n", ip);

	printf("Value of variable *ip is :%d\n",*ip);

    char *names[] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
    };
 
    for (int i = 0; i < MAX; i++){
      	printf("Value of names[%d] = %s\n", i, names[i] );
    }

	return 0;
}
#include <stdio.h>
#include <stdarg.h>

//Function prototype
int add(int args, ...);

int main(){

	printf("Addition 1 = %d\n", add(7,20,30,10,40,50,11,80));
	printf("Addition 1 = %d\n", add(4,40,50,11,80));
	return 0;
}

int add(int args, ...){
	va_list list;

	va_start(list, args);

	int i, sum = 0;

	for (i = 0; i < args; i++){
		sum += va_arg(list, int);
	}



	va_end(list);

	return sum;
}


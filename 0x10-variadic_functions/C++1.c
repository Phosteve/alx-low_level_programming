#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 3, j = 7;
	const int *ip = &i;
	ip = &j;
	return 0;
}

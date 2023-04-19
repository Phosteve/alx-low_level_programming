 #ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#define <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char*));
int_putchar(char c);
void array_iterator(int*array, size_t size, void(*action)(int));
int int_index(int*array, int size, int(*cmp)(int));

#endif

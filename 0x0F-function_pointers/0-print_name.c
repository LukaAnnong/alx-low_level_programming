#include <stdio.h>
#include "function_pointers.h"

/**
 *  print_name- Function that prints name.
 *  name : string that contains name.
 *  @f : pointer to function that prints name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}

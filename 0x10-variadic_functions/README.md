
// All About Variadic Functions//

#include <stdio.h>
#include <stdarg.h>

void print_ints(int num, ...) /* must have atleast 1 arg and tells you what else is coming*/
{
	va_list args;
	va_start(args, num); /* contains two args, va_list and the name of the last required arg*/
	/* essential sets a pointer to the spot on the call stack*/
	/* where variable arguments were stored wen the function was called*/
	
	for (int i = 0; i < num; i++)
	{
		int value = va_arg(args,int); /* va_arg is used to pull of the args in the order 
						 * they are listed*/
		printf("%d: %d\n", i,value);
	}
	va_end(args);
}

int main()
{
	print_ints(3,4,5, 34);
	/*print_ints(45, 456, 623, 0);
	print_ints( 455,67,2,4, 6, 7, 8);*/

	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*used to check code
  * Other description skipped*/
int main(int ac, char *av[])
{
	char *s;

	s =  argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}

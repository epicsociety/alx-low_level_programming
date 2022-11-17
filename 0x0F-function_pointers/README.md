
char *(*strcpy_ptr)(char *dst, const char *src) 

	is Pointer to strcpy-like function

Just like in a regular function declaration, the parameter names are optional:

char *(*strcpy_ptr_noparams)(char *, const char *) = strcpy_ptr
	 
	Parameter names removed — still the same type

A pointer to a pointer to a function has two asterisks inside of the parentheses:

char *(**strcpy_ptr_ptr)(char *, const char *) = &strcpy_ptr;

THINGS TO NOTE:

int *fip(); Function returning int pointer

int (*pfi)(); Pointer to function returning int

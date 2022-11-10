Malloc allocates memory 

void* malloc(sizeof(int) * n);
where n is the size

free() functions frees up space allocated using malloc 
valgrind verifies allocation of memory, also checks where there is memoery leaks.


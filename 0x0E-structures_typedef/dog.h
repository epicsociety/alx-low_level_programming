#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a simple struct
 * @name: first member
 * @age: second member
 * @owner: third member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

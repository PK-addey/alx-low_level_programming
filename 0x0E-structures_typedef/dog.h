#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - Defines a new type 'struct dog' with elements
* name, age, and owner.
*
* @name: The dog's name.
* @age: The dog's age.
* @owner: The dog's owner.
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

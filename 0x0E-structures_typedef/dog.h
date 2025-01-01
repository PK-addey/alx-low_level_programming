#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - Defines a structure for a dog.
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
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

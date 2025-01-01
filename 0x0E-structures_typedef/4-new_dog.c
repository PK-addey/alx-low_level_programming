#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - Creates a new dog structure
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: Pointer to the new dog structure, or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;
size_t name_len = 0, owner_len = 0;
size_t i;

while (name[name_len])
name_len++;
while (owner[owner_len])
owner_len++;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i <= name_len; i++)
name_copy[i] = name[i];

owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
for (i = 0; i <= owner_len; i++)
owner_copy[i] = owner[i];

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

return (dog);
}

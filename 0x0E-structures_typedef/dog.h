#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure for a dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

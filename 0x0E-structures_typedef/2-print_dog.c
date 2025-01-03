#include "dog.h"

/**
* print_dog - Prints a struct dog.
*
* @d: Pointer to the struct dog to be printed.
*
* Description: Prints the dog's name, age, and owner.
* If an element is NULL, prints (nil).
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

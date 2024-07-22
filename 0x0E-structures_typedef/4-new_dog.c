#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
size_t name_len, owner_len;

d = (dog_t *)malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

name_len = strlen(name) + 1;
owner_len = strlen(owner) + 1;

d->name = (char *)malloc(name_len);
d->owner = (char *)malloc(owner_len);

if (d->name == NULL || d->owner == NULL)
{
free(d->name);
free(d->owner);
free(d);
return (NULL);
}

strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;

return (d);
}

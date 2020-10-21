#include "dog.h"
#include <stdlib.h>
/**
*new_dog - function
*@name: char
*@age: float
*@owner: char
*Return: d
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
if (name || owner)
return (0);
d = malloc(sizeof(dog_t));
if (d)
return (0);
d->name = malloc(sizeof(char) * (sizeof(name)));
if (d->name)
{
free(d);
return (0);
}
d->owner = malloc(sizeof(char) * (sizeof(owner)));
if (d->owner)
{
free(d->name);
free(d);
return (0);
}
d->name = name;
d->owner = owner;
d->age = age;
return (d);
}

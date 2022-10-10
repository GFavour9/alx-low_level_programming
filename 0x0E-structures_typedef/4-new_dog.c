#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog structure
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
* Return: returns a pointer to newly created dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name = 0;
	int len_owner = 0;
	int n;
	char *cpn, *cpo;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpn = malloc(len_name + 1);
	if (cpn == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		cpn[n] = name[n];
	cpn[n] = '\0';

	cpo = malloc(len_owner + 1);
	if (cpo == NULL)
		return (NULL);
	for (n = 0; owner[n]; n++)
		cpo[n] = owner[n];
	cpo[n] = '\0';

	new_dog->name = cpn;
	new_dog->age = age;
	new_dog->owner = cpo;
	return (new_dog);
}

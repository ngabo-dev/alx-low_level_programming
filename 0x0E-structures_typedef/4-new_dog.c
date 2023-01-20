#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: 1st member.
 * @age: 2nd member.
 * @owner: 3rd member.
 *
 * Return: NULL if fail.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, len;

	struct dog *n_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;
	lenO = 0;
	while (owner[lenO] != '\0')
		lenO++;

	n_dog->namr = malloc(lenN )

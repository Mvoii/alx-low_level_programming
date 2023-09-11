#include "dog.h"

/**
 * init_dog - initialize dog struct
 *
 * @d: input pointer to struct dog
<<<<<<< HEAD
 * @name: input pointer to struct dog
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * return: nothing
=======
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: nothing
>>>>>>> 9f4016f7c6d169270d55d79c0033d634491deba1
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
<<<<<<< HEAD
=======
		/*d->name = name;*/
>>>>>>> 9f4016f7c6d169270d55d79c0033d634491deba1
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

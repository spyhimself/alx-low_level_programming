#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's attributes
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */

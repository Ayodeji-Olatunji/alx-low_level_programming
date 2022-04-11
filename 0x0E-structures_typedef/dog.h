#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a  new type of struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

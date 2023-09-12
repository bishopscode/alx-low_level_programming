#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a floating-point number).
 * @owner: The owner of the dog (a string).
 *
 * Description: This struct stores information about a dog, including its name,
 * age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif



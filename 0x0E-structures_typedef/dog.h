#ifndef DOG_H
#define DOG_H

/**
 * struct - to represent information about a dog
 * @struct dog: variable name
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

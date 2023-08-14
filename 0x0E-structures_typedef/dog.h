#ifndef DOG_H
#define DOG_H

/**
 * dog_t - defines a new name for struct dog with Typedef
 */
typedef struct dog dog_t;

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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);




#endif /* DOG_H */

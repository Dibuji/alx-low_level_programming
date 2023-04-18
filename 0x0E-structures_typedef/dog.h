#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Struct contains the name, age and owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for dog struct
 */

typedef struct dog dog_t;

#endif /* DOG_H */

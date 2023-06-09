#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data structure for age, name and owner of a dog
 * @age: age of the dog
 * @name: name of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen_recursion(char *s);
void free_dog(dog_t *d);

#endif

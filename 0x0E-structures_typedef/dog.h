#ifndef DOG_H
#define DOG_H

/**
* struct dog - stores information about of a dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*
* Description: This some of the data of a a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

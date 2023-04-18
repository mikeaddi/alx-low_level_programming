#ifndef DOG_H
#define DOG_H

/**
 * struct dog - funtion for a type of struct dog
 * @name: name of initialization
 * @age: age of initialization
 * @owner: owner of initialization
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
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

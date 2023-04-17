#ifndef DOG_H
#define DOG_H

/**
 * struct dog - composite data type
 * @name: name of the dog
 * @age: a floating point number, dog's age
 * @owner: a string of characters, dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - the typedef
 */
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *white_dog(char *name, float age, char *owner);
void blue_dog(my_dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *a);

#endif

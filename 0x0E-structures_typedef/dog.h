#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the structr of the dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner: the dogs master
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

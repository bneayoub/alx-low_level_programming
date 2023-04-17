#ifndef DOG_H
#define DOG_H
/*
 * File: dog.h
 * Desciption: Header defining struct dog.
 */

/**
 * struct dog - A new type defining a dog.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

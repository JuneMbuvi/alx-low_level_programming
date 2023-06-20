#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */
struct dog {
	char *name;
	float age;
	char *owner;
}my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new type for dog struct
 */
typedef struct dog dog_t;
#endif

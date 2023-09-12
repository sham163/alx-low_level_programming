#ifndef DOG_H
#define DOG_H

/**
 * Description: struct dog - a dog struct
 * @name: name
 * @age: age
 * @owner: owner
 */


struct dog *d
{
        char *name;
        float age;
        char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

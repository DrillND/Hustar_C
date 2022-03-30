#include <stdio.h>

struct person
{
    char name
        [20];
    char phnum
        [20];
    int age;
};

int main()
{
    struct person man, woman = {"¿©ÀÚ", "010- 1111 - 2222 ", 28};
    man = woman;
    printf("man:%s %s %d\n", man.name, man.phnum, man.age);
    printf("woman:%s %s %d\n", woman.name, woman.phnum, woman.age);
    man.name[0] = 'h';
    man.name[1] = 's';
    man.name[2] = 't';
    man.name[3] = 'a';
    man.name[4] = 'r';
    printf("man:%s %s %d\n", man.name, man.phnum, man.age);
    printf("woman:%s %s %d\n", woman.name, woman.phnum, woman.age);

    return 0;
}
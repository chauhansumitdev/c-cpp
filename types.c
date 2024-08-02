#include <stdio.h>

struct Person{
    char name[200];
    int age;
};


void main(){
    printf("ha chal raha hai ...\n");

    int age = 1;
    //printf("age %d\n", age);

    struct Person person = {"falana name", 0};

    // printf("%d", person.age);
    //printf("%s", person.name);


    union Data data;

    data.i = 0;
    data.str[0] = 'h';
    data.str[1] = 'Z';

    printf("%d", data.i);
}
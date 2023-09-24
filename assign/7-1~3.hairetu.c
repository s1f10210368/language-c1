#include <stdio.h>
#include <string.h>

typedef struct person {
    int age;
    char name[80];
} Person;

typedef struct {
    int count;
    Person members[100];
} PersonList;

void add_person(PersonList* persons, const char* name, int age)
{
    // persons->members[0]～[count-1]
    //  --> persons->members[1]～[count]
/*
    for (int i = persons->count - 1; i >= 0; i--) {
        persons->members[i+1] = persons->members[i];
    }
*/
    memmove(&persons->members[1], persons->members,
        persons->count * sizeof(Person));

    persons->members[0].age = age;
    strcpy(persons->members[0].name, name);
    persons->count++;
}

void show_adults(const PersonList* persons)
{
    for (int i = 0; i < persons->count; i++) {
        const Person* p = &persons->members[i];
        if (p->age >= 20) {
            printf("%s (%d)\n", p->name, p->age);
        }
    }
}

int main()
{
    PersonList persons = {.count = 0};
    add_person(&persons, "Nobita", 23);
    add_person(&persons, "Shizuka", 17);
    add_person(&persons, "Doraemon", 50);
    show_adults(&persons);
    return 0;
}


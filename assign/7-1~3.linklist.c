#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
    int age;
    char name[80];
    struct person *prev;
    struct person *next;
} Person;

typedef struct {
    Person* first;
    Person* last;
} PersonList;

void add_person(PersonList* persons, const char* name, int age)
{
    Person* p = (Person*)malloc(sizeof(Person));
    p->age = age;
    strcpy(p->name, name);

    if (persons->first != NULL) {
        // リストが空でない場合 (When list is not empty)
        p->prev = NULL;
        p->next = persons->first;
        persons->first->prev = p;
        persons->first = p;
    }
    else {
        // リストが空の場合 (When list is empty)
        p->prev = NULL;
        p->next = NULL;
        persons->first = p;
        persons->last = p;
    }
}

void show_adults(const PersonList* persons)
{
    for (const Person* p = persons->first; p != NULL; p = p->next) {
        if (p->age >= 20) {
            printf("%s (%d)\n", p->name, p->age);
        }
    }
}

int main()
{
    PersonList persons = {.first = NULL, .last = NULL};
    add_person(&persons, "Nobita", 23);
    add_person(&persons, "Shizuka", 17);
    add_person(&persons, "Doraemon", 50);
    show_adults(&persons);
    return 0;
}
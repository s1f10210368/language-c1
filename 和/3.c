#include <stdio.h>

typedef struct {
    char first_name[40];
    char family_name[40];
    int  grade;
} Person;

Person* showperson(const char* first_name, const char* family_name, int grade)
{
    Person* p = (Person*)malloc(sizeof(Person));
    strcat(p->first_name, p->family_name, first_name, family_name);
    return p;
}

int main()
{
    Person taro = {.first_name="Enryo", .family_name="Inoue", .grade=2};
    showperson(&taro);
    return 0;
}
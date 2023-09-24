//データ型Personで示される値をヒープメモリ上に作成し、その先頭アドレスを返す関数を定義せよ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[80];
    int age;
} Person;

Person* create_person(char* name, int age)
{
    Person* person = (Person*) malloc(sizeof(Person));
    strcpy(person->name, name);
    person->age = age;
    return person;
}

int main()
{
    Person* enryo = create_person("Inoue Enryo", 21);
    printf("%s (%d)\n", enryo->name, enryo->age);
    free(enryo);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    time_t ts; 
    char   msg[280+1]; 
} Tweet;

typedef struct {
    int    n; 
    Tweet* tweets[100];
} Diary;


Diary* create_diary()
{
    Diary* d = (Diary*)malloc(sizeof(Diary));
    d->n = 0; 
    return d;
}

void remove_tweet(Diary* d, int index)
{
    free(d->tweets[index]); 
    d->n--; 
    
    for (int i = index; i < d->n; i++) {
        d->tweets[i] = d->tweets[i+1];
    }
}

void print_tweets(const Diary* d)
{
    for (int i = 0; i < d->n; i++) {
        char s[100];
        printf("%d: %s\t%s\n\n", i++, ctime_r(&(t->ts), s), t->msg);
    }
}

void add_tweet(Diary* d, const char*msg)
{
    d->tweets[d->n].ts = time(NULL);
    strcpy(d->tweets[d->n].msg, msg);
    d->n++;
}


int main()
{
    Diary* diary = create_diary();

    add_tweet(diary, "Hello, World!");
    add_tweet(diary, "My second tweet!");
    add_tweet(diary, "My third tweet!");

    remove_tweet(diary, 1);

    add_tweet(diary, "My last tweet!");

    print_tweets(diary);

    return 0;
}


typedef struct{
    Person persons[MAX_PERSONS];
    int count;
} PersonListArray

typedef struct Node{
    Person person;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    int count
} PersonList

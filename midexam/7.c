#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char name[100];
    int  price;
} MenuItem;

const MenuItem tocho_menu[] = {
    {.name = "Mango Pudding", .price = 280},
    {.name = "Mapo Tofu", .price = 390},
    {.name = "Fried chicken bowl", .price = 390},
};

void print_item(MenuItem menuItem)
{
    printf("%s (%d yen)\n", menuItem.name, menuItem.price);
}

void remove_item()
{

}
int main()
{
    srand(time(NULL));

    for (int i = 1; i <= 31; i++) {
        MenuItem item = tocho_menu[rand() % 3];
        print_item(item);
    }
}



void setbit(uint32_t *address, int i)
{
    *address = *address | (1U << i);
}

void clearbit(uint32_t *address, int i)
{
    *address = *address &~(1U << i);
}
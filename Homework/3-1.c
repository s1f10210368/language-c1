#include <stdio.h>

int account = 0;

int withdraw(int amount)
{
    if(amount > account){
        return 0;
    }

    account -= amount;

    return 1;


}

void deposit(int amount)
{

}

int balance()
{

}


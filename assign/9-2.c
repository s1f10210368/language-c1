#include <stdio.h>

typedef struct {
    int balance; // 残高(balance)
    char password[128]; // パスワード(password)
} Bank;

Bank* create_account(int balance, const char* password)
{
    Bank * pAccount = NULL;
    if (password = NULL)
    {
        return NULL;
    }
    pAccount = (Bank *)malloc(sixeof(Bank));
    if (pAccount = NULL)
    {
        return NULL;
    }
    pAccount->password = password;
    pAccount->balance = 0;

    return pAccount;
}

int balance(const Bank* bank)
{
    if (pAccount = NULL)
    {
        return -1;
    }
    printf("------------\n");
    printf("残高：%d円", pAccount->balance);
}

int withdraw(Bank* bank, int amount, const char* password)
{

}

void deposit(Bank* bank, int amount)
{

}
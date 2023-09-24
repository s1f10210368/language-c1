//以下の2つの型を1つのヴァリアント型 number としてまとめ、number 型の2つの引数 x, y を受け取り、その和 (x + y) の結果を返す関数 add を定義せよ

#include <stdio.h>

typedef struct {
    enum {
        INT_VALUE, FLOAT_VALUE,
    } type;
    union {
        int int_value;
        double float_value;
    } num;
} number;

void add(number* result, const number* x, const number* y)
{
    switch (x->type) {
    case INT_VALUE:
        switch (y->type) {
        case INT_VALUE:
            result->type = INT_VALUE;
            result->num.int_value = x->num.int_value + y->num.int_value;
            break;
        case FLOAT_VALUE:
            result->type = FLOAT_VALUE;
            result->num.float_value = x->num.int_value + y->num.float_value;
            break;
        }
        break;
    case FLOAT_VALUE:
        switch (y->type) {
        case INT_VALUE:
            result->type = FLOAT_VALUE;
            result->num.float_value = x->num.float_value + y->num.int_value;
            break;
        case FLOAT_VALUE:
            result->type = FLOAT_VALUE;
            result->num.float_value = x->num.float_value + y->num.float_value;
            break;
        }
        break;
    }
}

int main()
{
    number x = { .type = INT_VALUE, .num = { .int_value = 2 } };
    number y = { .type = FLOAT_VALUE, .num = { .float_value = 3.4 } };

    number result;
    add(&result, &x, &y);

    switch (result.type) {
        case INT_VALUE:
            printf("result = %d\n", result.num.int_value);
            break;
        case FLOAT_VALUE:
            printf("result = %f\n", result.num.float_value);
            break;
    }
    
    return 0;
}
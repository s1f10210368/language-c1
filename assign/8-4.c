#include <stdio.h>
#include <string.h>

int isequal(const char* s, const char* t)
{
    return s == t;
}

int main()
{
    String strA = "INIAD";
    String strB = "INIAD";
    if (strA.Equals(strB))
    {
        Console.WriteLine("True");
    } else{
        Console.WriteLine("False");
    }
    return 0;
}
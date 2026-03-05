#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{

    int a = get_int("Number: ");
    int b = get_int("Number: ");

    printf(" a is %i b is %i", a, b);
    swap(&a, &b);
    printf(" now a is%i and b is %i\n", a, b);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

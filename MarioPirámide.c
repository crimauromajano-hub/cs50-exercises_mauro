#include <stdio.h>
#include <cs50.h>

void print_spaces(int i);
void print_row(int i);

int main(void)
{
    int i = get_int("Give me a number ");

    for (int x = 0; x < i; x++)
    {
        print_spaces(i - x);
        print_row(x + 1);
    }
}

void print_row(int i)
{
    for (int x = 0; x < i; x++)
    {

        printf("#");
    }
    printf("\n");
}

void print_spaces(int i)
{
    int x = 0;
    while (x < i || x == i)
    {
        printf(" ");
        x++;
    }
}
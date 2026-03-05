#include <cs50.h>
#include <stdio.h>

int main(void)

{

    int washington = 25;
    int roosvelt = 10;
    int jefferson = 5;
    int lincoln = 1;
    int coins = 0;

    int y = get_int("Change owned ");

    while (y > 0)
    {
        if (y >= 25)
        {
            y = y - washington, coins++;
        }
        else if (y >= 10)
        {
            y = y - roosvelt, coins++;
        }
        else if (y >= 5)
        {
            y = y - jefferson, coins++;
        }
        else if (y >= 1)
        {
            y = y - lincoln, coins++;
        }
    }
    printf(" %i\n", coins);
}

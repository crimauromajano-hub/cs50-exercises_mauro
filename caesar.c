#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int error_message(int message);
int converter(string palabra);
int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    // Autentificacion LLave
    if (error_message(key))
    {
        printf("./caesar error key\n");
    }

    // Intercambio Mensaje
    else
    {
        string plaintext = get_string("plaintext: ");
        for (int jump = 0; jump < strlen(plaintext); jump++)
        {
            converter(plaintext);
            printf("%c", (plaintext[jump] + key % 26));
        }
        printf("\n");
    }
}

// FUNCION MENSAJE ERROR
int error_message(int message)
{
    if (message == 0)
    {
        return 1;
    }
    if (message < -1)
    {
        return 1;
    }
    if (message > 97 && message < 122)
    {
        return 1;
    }
    if (message > 65 && message < 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// convertidor

int converter(string palabra)
{
    int score = 0;
    for (int t = 0; t < strlen(palabra))
        ;
    {
        score = t + palabra[t];
    }
    return score;
}

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int calc_words(string frase);
int calc_letters(string palabras);
int calc_sentence(string frase);
int main(void)
{
    string text = get_string("Text: ");

    // Calculo Letters
    int letter = calc_letters(text);
    printf("%i\n", letter);

    // Calculo Words
    int words = calc_words(text);
    printf("%i\n", words);
    // Calculo Sentences
    int sentences = calc_sentence(text);
    printf("%i\n", sentences);

    // Aplicacion formula base
    float l = letter / words * 100;
    float s = sentences / words * 100;

    float index = 0.0588 * l - 0.296 * s - 15.8;
    int grade = round(index);
    if (grade > 16)
        printf("Grade +16\n");
    if (grade < 1)
        printf("Before 1 grade\n");
    else
    {
        printf("Grade %i", grade);
    }
}
int calc_letters(string palabras)
{
    int space = 0;
    int number = 0;
    int marks = 0;
    int total = strlen(palabras);
    int letters = 0;
    for (int i = 0; i < strlen(palabras); i++)
    {
        if (isdigit(palabras[i]))
        {
            number++;
        }

        if (isspace(palabras[i]))
        {
            space++;
        }
        if (ispunct(palabras[i]))
        {
            marks++;
        }
        letters = total - number - space - marks;
    }
    return letters;
}

int calc_words(string frase)
{
    int blank = 0;
    int words = 0;
    int total = strlen(frase);
    for (int x = 0; x < total; x++)
    {
        if (isalpha(frase[x]) && (x == 0 || !isalpha(frase[x - 1])))
        {
            words++;
        }
    }
    return words;
}

int calc_sentence(string frase)
{
    int sentence = 0;
    for (int j = 0; j < strlen(frase); j++)
    {

        if (ispunct(frase[j]))
        {
            sentence++;
        }
    }
    return sentence;
}

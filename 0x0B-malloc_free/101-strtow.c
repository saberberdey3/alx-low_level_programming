#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int i, words = 0;

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            ++words;
        }
    }

    return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, word_count = 0;

    if (str == NULL || str[0] == '\0')
    {
        return (NULL);
    }

    word_count = count_words(str);

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
    {
        return (NULL);
    }

    for (i = 0, j = 0; i < word_count; ++i, ++j)
    {
        while (str[j] == ' ')
        {
            ++j;
        }

        len = 0;
        while (str[j + len] != ' ' && str[j + len] != '\0')
        {
            ++len;
        }

        words[i] = malloc(sizeof(char) * (len + 1));
        if (words[i] == NULL)
        {
            for (k = 0; k < i; ++k)
            {
                free(words[k]);
            }

            free(words);
            return (NULL);
        }

        strncpy(words[i], &str[j], len);
        words[i][len] = '\0';

        j += len;
    }

    words[i] = NULL;

    return (words);
}

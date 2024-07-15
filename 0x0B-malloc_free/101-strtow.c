#include "main.h"
#include <stdlib.h>

/**
 * word_len - finds the length of a word
 * @str: the string to be searched
 *
 * Return: the length of the word
 */
int word_len(char *str)
{
    int len = 0;

    while (*(str + len) != ' ' && *(str + len) != '\0')
        len++;

    return (len);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to be searched
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
    int i = 0, words = 0, len = 0;

    while (*(str + len))
        len++;

    for (i = 0; i < len; i++)
    {
        if (*(str + i) != ' ' && (i == 0 || *(str + i - 1) == ' '))
            words++;
    }

    return (words);
}

/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: a pointer to an array of strings (words) or NULL if fails
 */
char **strtow(char *str)
{
char **words_array;
int i = 0, words, w, letters, l;

if (str == NULL || *str == '\0')
return (NULL);

words = count_words(str);
if (words == 0)
return (NULL);

words_array = malloc((words + 1) * sizeof(char *));
if (words_array == NULL)
return (NULL);

for (w = 0; w < words; w++)
{
while (str[i] == ' ')
i++;

letters = word_len(str + i);

words_array[w] = malloc((letters + 1) * sizeof(char));
if (words_array[w] == NULL)
{
for (; w >= 0; w--)
free(words_array[w]);
free(words_array);
return (NULL);
}

for (l = 0; l < letters; l++)
words_array[w][l] = str[i++];

words_array[w][l] = '\0';
}
words_array[w] = NULL;

return (words_array);
}

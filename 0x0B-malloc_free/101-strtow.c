#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in the input string
 * @str: string to evaluate
 *
 * Return: number of words
 */

int count_words(const char *str)
{
	int count = 0;

	int in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				count++;

				in_word = 1;
			}
		}
		str++;
	}
	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **words;

	int i;

	int word_index = 0;

	int word_length = 0;

	int in_word = 0;

	int num_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);

	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i < word_index; i++)
					{
						free(words[i]);
					}

					free(words);

					return (NULL);
				}
				strncpy(words[word_index], str - word_length, word_length);

				words[word_index][word_length] = '\0';

				word_index++;

				word_length = 0;

				in_word = 0;
			}
		}
		else
		{
			word_length++;

			if (!in_word)
				in_word = 1;
		}

		str++;
	}

	if (in_word)
	{
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (i = 0; i <= word_index; i++)
			{
				free(words[i]);
			}

			free(words);

			return (NULL);
		}

		strncpy(words[word_index], str - word_length, word_length);

		words[word_index][word_length] = '\0';

		word_index++;
	}

	words[word_index] = NULL;

	return (words);
}


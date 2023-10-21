#include <stdlib.h>
#include "main.h"

/**
 * count_w - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_w(char *s)
{
	int flag, i, word;

	flag = 0;
	word = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}

	return (word);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL  if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, k = 0, length = 0, words, n = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= length; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (n)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (n + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - n;
				k++;
				n = 0;
			}
		}
		else if (n++ == 0)
			start = j;
	}

	matrix[k] = NULL;

	return (matrix);
}


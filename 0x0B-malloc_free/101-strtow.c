#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * count_string_words - Determines the number of words in a given string.
 *
 * @str: The string to analyze for word count.
 *
 * Return: The total number of words found in the string.
 */
int count_string_words(char *str)
{
	int word_count = 0;
	int idx = 0;

	while (str[idx] != '\0')
	{
		if (str[idx] != ' ')
		{
			word_count++;
			while (str[idx] != ' ' && str[idx] != '\0')
				idx++;
		}
		else
			idx++;
	}
	if (word_count == 0 && strlen(str) == 1 && str[0] == ' ')
		word_count = 0;

	return (word_count);
}

/**
 * strtow - Breaks a string into an array of words
 *
 * @str: The string to split into words
 *
 * Return: Pointer to an array containing the individual words
 */
char **strtow(char *str)
{
	int word_count;
	int idx = 0;
	int arr_idx = 0;
	int start_idx;
	int end_idx;
	int current_word_length;
	char *current_word;
	char **split_words;

	if (str == NULL || strlen(str) == 0 || count_string_words(str) == 0)
		return (NULL);
	word_count = count_string_words(str);
	split_words = malloc(sizeof(char *) * (word_count + 1));

	if (split_words == NULL)
		return (NULL);

	while (str[idx] != '\0' && arr_idx < word_count)
	{
		start_idx = idx;
		while (str[idx] != ' ' && str[idx] != '\0')
			idx++;
		end_idx = idx;
		current_word_length = end_idx - start_idx;
		if (current_word_length > 0)
		{
			current_word = malloc(sizeof(char) * (current_word_length + 1));
			if (current_word == NULL)
				return (NULL);
			strncpy(current_word, str + start_idx, current_word_length);
			current_word[current_word_length] = '\0';
			split_words[arr_idx] = current_word;
			arr_idx++;
		}

		else
			idx++;
	}
	split_words[arr_idx] = NULL;
	return (split_words);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:06:56 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/02 19:21:13 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charsequivalent(char stri, char c)
{
	if (stri == c)
		return (1);
	return (0);
}

static int	word_count(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charsequivalent(*str, c))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_charsequivalent(*str, c))
				str++;
		}
	}
	return (count);
}

static char	*malloc_word(const char *str, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (str[len] && !is_charsequivalent(str[len], c))
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	int		total;
	char	**result;
	int		i;

	total = word_count(str, c);
	result = (char **)malloc(sizeof(char *) * (total + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_charsequivalent(*str, c))
			str++;
		if (*str && !is_charsequivalent(*str, c))
		{
			result[i++] = malloc_word(str, c);
			while (*str && !is_charsequivalent(*str, c))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void print_split(char **split)
{
    int i = 0;
    while (split[i])
    {
        printf("split[%d]: \"%s\"\n", i, split[i]);
        i++;
    }
}

int main(void)
{
    char *str = "Hello,,World,,This,is,Libft!";
    char delimiter = ',';

    char **result = ft_split(str, delimiter);

    if (result)
    {
        print_split(result);

        // Free allocated memory
        int i = 0;
        while (result[i])
            free(result[i++]);
        free(result);
    }
    else
    {
        printf("ft_split returned NULL\n");
    }

    return 0;
}


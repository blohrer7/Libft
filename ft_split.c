/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 06:30:44 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/18 08:18:27 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_split(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	*copy_word(const char *start, size_t len)
{
	size_t	i;
	char	*word;

	i = 0;
	word = (char *)malloc(len + 1);
	if (word == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int			i;
	int			words;
	const char	*start = s;
	char		**result;
	size_t		len;

	i = 0;
	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (*s != '\0' && i < words)
	{
		if (*s != c)
		{
			len = 0;
			start = s;
			while (*s != '\0' && *s != c)
			{
				s++;
				len++;
			}
			result[i] = copy_word(start, len);
			if (result[i] == NULL)
			{
				free_split(result, i);
				return (NULL);
			}
			i++;
		}
		else
		{
			s++;
		}
	}
	result[i] = NULL;
	return (result);
}
// void	free_split(char **result, int words)
// {
// 	int	i;

// 	i = 0;
// 	while (i < words)
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }

// static int  count_words(char const *s, char c)
// {
//     int count;

//     count = 0;
//     while (*s != '\0')
//     {
//         if (*s != c)
//         {
//             count++;
//             while (*s && *s != c)
//                 s++;
//         }
//         else
//             s++;
//     }
//     return (count);
// }
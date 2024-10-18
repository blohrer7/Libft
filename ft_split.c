/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 06:30:44 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/18 11:22:54 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// static int	count_words(char const *s, char c)
// {
// 	int	count;

// 	count = 0;
// 	while (*s != '\0')
// 	{
// 		if (*s != c)
// 		{
// 			count++;
// 			while (*s && *s != c)
// 				s++;
// 		}
// 		else
// 			s++;
// 	}
// 	return (count);
// }

// static char	*next_word(const char *str, char c, int *k)
// {
// 	char	*word;
// 	int		end;
// 	int		start;

// 	while (str[k] && str[k] == c)
// 		k++;
// 	start = *k;
// 	while (str[k] && str[k] != '\0')
// 		k++;
// 	end = *k;
// 	word = ft_substr(str, start - end)
// 	if (word == NULL)
// 		return (NULL);
// 	return (word);
// }

char	**ft_split(const char *s, char c)
{
	(void)s;
	(void)c;
	return (NULL);
}
// {
// 	int		i;
// 	int		words;
// 	char	**result;
// 	int		j;


// 	if (str == NULL)
// 		return (NULL);
// 	words = count_words(s, c);
// 	result = (char *)malloc()

// }


















// char	**ft_split(const char *str, char c)
// {
// 	char	**result;
// 	int		word_count;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	if (str == NULL)
// 		return (NULL);
// 	word_count = count_words(str, c);
// 	result = (char **)malloc((word_count + 1) * sizeof(char *));
// 	if (result == NULL)
// 		return (NULL);
// 	while (i < word_count)
// 	{
// 		result[i] = next_word(str, c, &j);
// 		if (result[i] == NULL)
// 		{
// 			ft_free(result);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	result[i] = NULL;
// 	return (result);
// }

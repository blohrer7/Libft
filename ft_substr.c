/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:15:07 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/14 11:34:29 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	max_len;
	char	*substr;

	if (s == NULL)
	{
		return (NULL);
	}
	s_len = strlen(s);
	if (start >= s_len)
	{
		return (strdup(""));
	}
	max_len = (s_len - start < len) ? (s_len - start) : len;
	substr = (char *)malloc(max_len + 1);
	if (substr == NULL)
	{
		return (NULL);
	}
	strncpy(substr, s + start, max_len);
	substr[max_len] = '\0';
	return (substr);
}

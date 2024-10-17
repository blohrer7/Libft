/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:15:07 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/17 10:42:39 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	max_len;
	char	*substr;

	if (s == NULL)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (s_len - start < len)
		max_len = s_len - start;
	else
		max_len = len;
	substr = (char *)malloc(max_len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strncpy(substr, s + start, max_len);
	substr[max_len] = '\0';
	return (substr);
}

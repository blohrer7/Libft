/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:36:52 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/14 09:37:17 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;
	size_t	i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}

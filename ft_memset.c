/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:43:44 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/09 12:05:26 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, int num)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	for (int i = 0; i < num; i++)
	{
		p[i] = (unsigned char)value;
	}
	return (ptr);
}

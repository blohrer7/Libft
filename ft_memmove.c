/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:04:17 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/16 09:20:02 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t num)
{
    unsigned char *d;
    const unsigned char *s;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    size_t i;
    i = 0;

    if (d < s)
    {
        while (i < num)
        {
            d[i] = s[i];
            i++;
        }
        
    }
    else if (d > s)
    {
        i = num;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
        
    }
    return (dest);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:43:27 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/09 09:00:29 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int n)
{
    if(n >= '0' && n <= '9')
        return 1;
    else
        return 0;
}
int ft_isalpha(int c)
{
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    else 
        return 0;
}

int ft_isalnum(int c)
{
    if(ft_isdigit(c) || ft_isalpha(c))
        return 1;
    else 
        return 0;
}
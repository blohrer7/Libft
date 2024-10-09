/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ isdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:37:33 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/09 08:49:08 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int n)
{
    if(n >= '0' && n <= '9')
        return 1;
    else
        return 0;
}
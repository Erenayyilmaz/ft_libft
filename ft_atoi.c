/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:55:26 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 01:56:11 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	int	index;
	int	sum;

	sum = 0;
	index = 0;
	while (!ft_isdigit(nptr[index]))
		index++;
	while (ft_isdigit(nptr[index]))
	{
		sum *= 10;
		sum += (nptr[index] - '0');
		index++;
	}
	return (sum);
}

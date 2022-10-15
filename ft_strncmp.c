/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:03:37 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:03:38 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && s1[index] == s2[index] && s1 && s2)
		index++;
	if (s1[index] == s2[index])
		return (0);
	else if (s1[index] > s2[index])
		return (1);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:04:14 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:04:18 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	while (index > 0)
	{
		if (s[index] == (char)c)
			return ((char *)&(s[index]));
		index--;
	}
	return (0);
}

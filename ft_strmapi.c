/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:03:19 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:06:24 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	tmp = (char *)malloc(ft_strlen(s) + 1);
	if (!tmp || !f || !s)
	{
		return (0);
	}
	i = 0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);
}

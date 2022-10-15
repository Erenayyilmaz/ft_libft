/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:02:35 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:02:48 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char			*d;
	size_t			n;
	size_t			destlen;

	d = dst;
	while (d && n-- != 0)
		d++;
	destlen = d - dst;
	n = dstsize - destlen;
	return ;
}

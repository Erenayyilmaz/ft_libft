/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayyilma <kayyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:00:39 by kayyilma          #+#    #+#             */
/*   Updated: 2022/10/16 02:00:40 by kayyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	if (s != 0)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

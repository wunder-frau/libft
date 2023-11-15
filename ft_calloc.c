/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:13:09 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/14 10:02:34 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *ft_overflow(size_t count, size_t size)
{
	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	if (size > SIZE_MAX / count)
	{
		return (NULL);
	}
	return ((void *)1);
}

void	*ft_calloc(size_t count, size_t size)
{
	void			*dest;
	size_t			total;

	ft_overflow(count, size);
	total = count * size;
	dest = malloc(total);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, total);
	return (dest);
}

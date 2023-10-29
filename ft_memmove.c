/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:20:04 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/29 14:38:33 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*chard;
	char	*chars;

	chard = (char *)dst;
	chars = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		while (len--)
		{
			*chard++ = *chars++;
		}
	}
	else if (dst > src)
	{
		chard += len - 1;
		chars += len - 1;
		while (len--)
		{
			*chard-- = *chars--;
		}
	}
	return (dst);
}
/*int main()
{
	char s[11] = "hellothere";
	char f[5] = "what";

	char s[22]= "o";
	char f[5] = "what";

	char *g = ft_memmove(s, f, 2);
	printf("%s\n", g);
	memmove(s, f, 2);
	printf("%s\n", g);
	return (0);
}*/

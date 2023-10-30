/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:33:36 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/30 10:25:46 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const	char *src, size_t	dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (--dstsize && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (len);
}
/*int main ()
{
	char s[10];
	char f[5] = "what";

	size_t t = ft_strlcpy(s, f, 5);
	printf("%zu\n", t);
	printf("%s", s);

	return (0);
}*/

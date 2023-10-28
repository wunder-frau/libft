/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:59:00 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/28 13:14:31 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return NULL;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*int main()
{
	char s[20] = "hello";
	char de[20] = "copyithere";
	char *g = ft_memcpy(de, s, 3);
	printf("%s", g);
	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:27:44 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/30 18:29:57 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || c == '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}
/*int main()
{
	char str[15] = "qwert3yuio3p";
	char ch = '3';
	char *func;

	func = ft_strchr(str, ch);
	printf("%s", func);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:16:16 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/31 16:25:23 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = (char *)s + ft_strlen(s);
	while (*end != (unsigned char)c)
	{
		if (end == s)
		{
			return (NULL);
		}
		end--;
	}
	return (end);
}
/*int main()
{
	char str[15] = "qwert3yuio3p";
	char ch = '3';
	char *func;

	func = ft_strrchr(str, ch);
	
	printf("%s", func);
	return (0);
}*/

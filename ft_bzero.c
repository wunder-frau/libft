/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:12:56 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/27 08:28:04 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*h;
	size_t			i;

	h = s;
	i = 0;
	while (i < n)
	{
		h[i] = 0;
		i++;
	}
}
/*int main () {
   char str[7] = "Lalala";
   printf("%s\n", str);
   int g = ft_strlen(str);
   printf("%d\n", g);
   ft_bzero(str, 3);
   printf("%s\n", str);
   printf("%s\n", str + 3);

   return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:06:17 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/26 15:09:41 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;
	unsigned char	t;

	i = b;
	t = c;
	while (len > 0)
	{
		*i++ = t;
		len --;
	}
	return (b);
}
/*int main () {
   char str[50];
 
   ft_memset(str,'?',17);
   printf("%s\n", str);

   return(0);
}*/

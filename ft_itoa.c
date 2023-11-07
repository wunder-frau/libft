/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:16:36 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/06 09:23:15 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

static int	ft_count(int n)
{
	int	digit;

	digit = !n;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	bool	sign;
	char	*res;
	size_t	count;

	sign = n < 0;
	count = ft_count(n) + sign;
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (!res)
		return (res);
	res[count] = 0;
	if (sign)
	{
		*res = '-';
		res[--count] = -(n % 10) + 48;
		n = -(n / 10);
	}
	while (count-- - sign)
	{
		res[count] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}
/*int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(+12345));
	printf("%s\n", ft_itoa(-54321));
}*/

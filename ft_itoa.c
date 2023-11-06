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

static	int	ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len = 1;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_int_to_char(char *str, int n, long int len)
{
	while (n > 0)
	{
		str[len] = 48 + (n % 10);
		n /= 10;
		len--;
	}
	return (str);
}

static int	ft_invert(char *str, int n)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	return (n);
}

char	*ft_itoa(int nb)
{
	char			*str;
	long long int	n;
	size_t			i;

	n = nb;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_len(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	str = ft_int_to_char(str, ft_invert(str, n), i);
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(+12345));
	printf("%s\n", ft_itoa(-54321));
}*/

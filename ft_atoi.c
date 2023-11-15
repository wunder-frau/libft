/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:41:52 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/15 12:56:03 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	int				is_negative;
	long long		number;

	is_negative = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			is_negative = -1;
	}
	while (*str >= 48 && *str <= 57)
	{
		if (number >= LONG_MAX / 10 && (number > LONG_MAX / 10 \
					|| (*str - '0') > LONG_MAX % 10))
		{
			if (is_negative == 1)
				return (-1);
			else if (is_negative == -1)
				return (0);
		}
		number = number * 10 + (*(str++) - '0');
	}
	return ((int)number * is_negative);
}
/*#include <stdlib.h>
#include <stdio.h>
#include <libc.h>
int main(void)
{
    char *s = "-21474836481111111111111111111111111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("%s\n", str);
        printf("%i\n", atoi(str));
        printf("%i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:41:52 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/14 17:42:07 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				is_negative;
	long long int	number;

	i = 0;
	is_negative = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	return (number * is_negative);
}

#include <stdlib.h>
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
}

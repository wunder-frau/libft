/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:51:34 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/25 19:39:01 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}
/*int main()
{
	//char a = 2;
	char a = 122;
	int  res = ft_isalpha(a);
	if (res)
	{
		printf("%c is a char", a);
	} else 
	{
		printf("%c is not a char", a);
	}
}*/

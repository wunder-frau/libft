/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:34:09 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/25 15:38:46 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
/*int main()
{
	//char a = 2;
	int a = 129;
	int  res = ft_isascii(a);
	if (res)
	{
		printf("%c is an ascii char", a);
	} else 
	{
		printf("%c is not an ascii char", a);
	}
}*/

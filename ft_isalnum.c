/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:08:08 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/25 16:12:14 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*int main()
{
	//char a = 2;
	int a = 122;
	int  res = ft_isalnum(a);
	if (res)
	{
		printf("%i is a char", a);
	} else 
	{
		printf("%i is not a char", a);
	}
}*/

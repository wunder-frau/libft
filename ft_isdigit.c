/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:25:34 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/25 15:37:58 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}
/*int main ()
{
	//char f = 'k';
	char f = '9';
	int res = ft_isdigit(f);
	    if (res) {
        printf("'%c' is a digit.\n", f);
    } else {
        printf("'%c' is not a digit.\n", f);
    }
    return 0;
}*/

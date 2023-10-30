/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:33:38 by istasheu          #+#    #+#             */
/*   Updated: 2023/10/30 17:11:28 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] && i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int	main(void)
{
	char s[] = "aaaaa";
	char f[] = "aaaaa";
    char g = 4;

if (ft_strncmp(s, f, g) == 0){

    printf("%s\n", "the same");
} else {
    printf("%s\n", "are different");
}
	return 0;
}*/

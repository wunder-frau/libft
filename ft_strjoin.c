/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:37:23 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/02 12:41:28 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*dst;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(*dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	while (*s1)
		dst[i++] = *s1++;
	while (*s2)
		dst[i++] = *s2++;
	dst[i] = '\0';
	return (dst);
}
/*int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "World!";

    // Call your custom ft_strjoin function
    char *result = ft_strjoin(string1, string2);

    if (result) {
        printf("Concatenated String: %s\n", result);

        // Don't forget to free the memory allocated by ft_strjoin
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/

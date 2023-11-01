/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:41:26 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/01 13:14:58 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	i = 0;
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*int main() {
    const char *original = "Hello, World!";
    char *duplicate;

    // Use strdup to create a duplicate of the original string
    duplicate = ft_strdup(original);

    if (duplicate) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Don't forget to free the duplicated string when you're done with it
        free(duplicate);
    } else {
        // Handle the case where strdup fails to allocate memory
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/

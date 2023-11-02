#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	i = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
int main() {
    char destination[20] = "Hello, ";
    const char *source = "World!";

    size_t initialLength = ft_strlen(destination);
    size_t bufferSize = sizeof(destination) - initialLength; // Available space in the destination buffer

    printf("Original Destination: %s\n", destination);

    // Call the ft_strlcat function to concatenate 'source' to 'destination'
    size_t result = ft_strlcat(destination + initialLength, source, bufferSize);

    printf("Concatenated Destination: %s\n", destination);
    printf("Resulting Length: %zu\n", result);

    return 0;
}

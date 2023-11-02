#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*int main() {
    const char *inputString = "This is a sample string for testing.";

    // Extract a substring starting at index 10 with a length of 6 characters
    char *substring = ft_substr(inputString, 10, 6);

    if (substring) {
        printf("Original String: %s\n", inputString);
        printf("Substring: %s\n", substring);

        // Don't forget to free the dynamically allocated memory
        free(substring);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/

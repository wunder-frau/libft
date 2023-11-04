#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	i = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	/*if (first > last)
		return (ft_strdup(s1 + last + 1));*/
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	trim = (char *)malloc(sizeof(*s1) * (last - first + 1));
	if (!trim)
		return (NULL);
	while (first < last)
		trim[i++] = s1[first++];
	trim[i] = 0;
	return (trim);
}
/*
int main() {
    //const char *input = "   Hello, world!&   ";
   // const char *chars_to_trim = " \t &"; // Characters to trim: space and tab
   //
 const char *input = "\t\t\t";
const char *chars_to_trim = " \t";

    char *trimmed_str = ft_strtrim(input, chars_to_trim);

    if (trimmed_str == NULL) {
        printf("Memory allocation error.\n");
        return 1;
    }

    printf("Original String: \"%s\"\n", input);
    printf("Trimmed String: \"%s\"\n", trimmed_str);

    free(trimmed_str);

    return 0;
} */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
    size_t count;

    if (!s)
        return (0);
    count = 0;
    while (*s) {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s != c && *s)
            s++;
    }
    return (count);
}

static unsigned int	ft_getstart(char const *s, char c)
{
	unsigned int start;

	start = 0;
	if (!s)
		return (0);
	while (s[start] && s[start] == c)
		start++;
	return (start);
}

static unsigned int	ft_getend(char const *s, unsigned int start, char c)
{
	unsigned int end;

	end = start;
	if (!s)
		return (0);
	while (s[end] && s[end] != c)
		end++;
	return (end);
}

char 	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char**	words;	
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;

	if (!s)
		return (NULL);
	word_count = ft_countword(s, c);
	words = (char **)malloc(sizeof(char *) * word_count);
	if (!words)
		return (NULL);
	i = 0;
	while (*s && i != word_count)
	{
		start = ft_getstart(s, c);
		end = ft_getend(s, start, c);
		words[i++] = ft_substr(s, start, end - start);
		// printf("[%s]\n", words[i]);
		s += end;
	}
	return (words);
}

/*int main() {
    char input[] = "   This is a sample    sentence.     ";
    char delimiter = ' ';

    char** words = ft_split(input, delimiter);
    printf("[%s]\n", words[0]); 
    // size_t wordCount = ft_countword(input, delimiter);
    // printf("Number of words: %zu\n", wordCount);

    return 0;
}*/

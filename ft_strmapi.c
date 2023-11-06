#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*ret;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	ret = ft_strdup(s);
	if (!ret)
		return (NULL);
	i = 0;
	while (ret[i])
	{
		ret[i] = f(i, ret[i]);
		i++;
	}
	return (ret);
}

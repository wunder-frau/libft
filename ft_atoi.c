#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int 	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 0;
	while (str[i] == 32 || (str[i] >= 9 || str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (!(neg % 2))
		return (nb);
	return (-nb);
}
int main() {
    char s[] = "--+-54321";
    printf("%d\n", ft_atoi(s));
    return 0;
}

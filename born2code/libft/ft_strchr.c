#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	size_t i;

	i = 0;
	while (str[i] != character)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)str + i);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	size_t s_len;
	size_t i;

	if (*s == '\0')
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	i = 0;
	if (start < s_len)
	{
		while (start < len && s[start] != '\0')
		{
			result[i] = s[start];
			i++;
			start++;
		}
	}
	result[i] = '\0';
	return (result);
}

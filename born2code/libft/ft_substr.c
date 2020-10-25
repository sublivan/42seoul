#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	i = start;
	j = 0;
	if (start < s_len)
	{
		while (i < start + len && s[i] != '\0')
		{
			result[j] = s[i];
			i++;
			j++;
		}
	}
	result[j] = '\0';
	return (result);
}

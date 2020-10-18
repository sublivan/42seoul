#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t  s1_size;

	if (s1 && s2)
	{
		s1_size = ft_strlen(s1);
		if (!(result = (char *)malloc(sizeof(char) * (s1_size + ft_strlen(s2)+ 1))))
			return (NULL);
		i = 0;
		while (s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			result[s1_size++] = s2[i++];
		}
		result[s1_size] = '\0';
		return (result);
	}
	return (NULL);
}

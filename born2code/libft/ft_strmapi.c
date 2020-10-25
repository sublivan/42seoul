#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*new_str;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	if (!(new_str = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

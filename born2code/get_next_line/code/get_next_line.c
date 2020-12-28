#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
    {
        len++;
    }
    return (len);
}

char *ft_strchr(const char *s, int c)
{
    size_t i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((char *)s + i);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (dstsize > 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(const char *s1)
{
    char    *result;
    size_t  i;
    size_t  s1_len;

    s1_len = ft_strlen(s1);
    result = (char *)malloc(sizeof(char) * (s1_len + 1));
    if (!result)
    {
        return (0);
    }
    i = 0;
    while (i < s1_len)
    {
        result[i] = s1[i];
    }
    result[i] = '\0';
    return (result);
}

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t num)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	i = 0;
	while (i < num)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char)c)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}

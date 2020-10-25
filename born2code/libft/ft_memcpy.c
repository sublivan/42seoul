#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	if (!dest && !source)
		return (NULL);
	dst = (unsigned char*)dest;
	src = (unsigned char*)source;
	i = 0;
	while (i < num)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

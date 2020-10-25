#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	while (num--)
	{
		if (*(unsigned char*)ptr == (unsigned char)value)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}

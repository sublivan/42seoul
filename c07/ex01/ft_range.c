#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int index;
	int length;

	if(min >= max)
		return (0);
	
	length = max - min;
	dest = (int *)malloc(sizeof(int) * length);

	index = 0;
	while (index < length)
	{
		dest[index] = min + index;
		index ++;
	}
	return (dest);
}

#include <stdio.h>

int		main(void)
{
	int *a = ft_range(1, 5);

	while (*a)
	{
		printf("%d", *a);
		++a;
	}
}

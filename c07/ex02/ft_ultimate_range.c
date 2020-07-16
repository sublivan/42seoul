#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long length;
	long long index;
	int *temp;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	length = max - min;
	temp = (int*)malloc(sizeof(int) * length);
	if(temp == 0)
		return (-1);
	index = 0;
	while (index < length)
	{
		temp[index] = min + index;
		index++;
	}
	*range = temp;
	return ((int)length);
}

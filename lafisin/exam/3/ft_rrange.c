#include <stdlib.h>
#include <stdio.h>
int		*ft_rrange(int start, int end)
{
	int size = end - start;
	if(size < 0)
		size *= -1;
	int *result;
	result = (int *)malloc(sizeof(int) * (size + 1));
	int i = 0;
	while (i <= size)
	{
		result[i] = end > start? start  + i : end + i;
		i++;
	}
	return (result);
}



int main(void)
{
	int *num = ft_rrange(-1, 2);
	int i = 0;
	
	for(int i =0; i < 6; i++)
		printf("%d ", num[i]);
}


/*
Write the following function:

int     *ft_rrange(int start, int end);

정수 배열을 malloc ()로 할당하고 연속으로 채 웁니다.
종료시 시작 및 종료시 시작하는 값 (시작 및 종료 포함!)
배열의 첫 번째 값에 대한 포인터를 반환합니다.
Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.

*/
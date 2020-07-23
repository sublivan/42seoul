#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int		main(void)
{
	int	*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d", max(tab, 3));
	return (0);
}
/*
Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

첫 번째 매개 변수는 int의 배열이고 두 번째 매개 변수는 int의 배열입니다.
배열

이 함수는 배열에서 찾은 가장 큰 숫자를 반환합니다.

배열이 비어 있으면 함수는 0을 반환합니다.

*/
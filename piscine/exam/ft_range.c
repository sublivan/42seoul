#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int size;
	int i;

	size = max > min ? max - min : min - max;
	if(!(dest = (int *)malloc(sizeof(int) * (size + 1))))
		return (0);
	i = 0;
	while (i <= size)
	{
		dest[i] = max > min ? min + i : max + i;
		i++;
	}
	return (dest);
}


int main(void)
{
	int *num = ft_range(-1, 2);
	int i = 0;
	
	for(int i =0; i < 6; i++)
		printf("%d ", num[i]);
}
/*
다음 함수를 작성하십시오.

int * ft_range (int start, int end);

정수 배열을 malloc ()로 할당하고 연속으로 채 웁니다.
시작과 끝에서 시작하는 값 (시작과 끝 포함!)
배열의 첫 번째 값에 대한 포인터를 반환합니다.

예 :

-(1, 3)을 사용하면 1, 2 및 3을 포함하는 배열을 반환합니다.
-(-1, 2)를 사용하면 -1, 0, 1 및 2를 포함하는 배열이 반환됩니다.
-(0, 0)을 사용하면 0을 포함하는 배열을 반환합니다.
-(0, -3)을 사용하면 0, -1, -2 및 -3을 포함하는 배열을 반환합니다.

*/


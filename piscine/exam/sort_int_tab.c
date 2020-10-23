void	ft_swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned	a = 0;
	unsigned	i = 0;

	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			a = i;
		}
		while (a)
		{
			if (tab[a - 1] > tab[a])
			{
				ft_swap(&tab[a - 1], &tab[a]);
				--a;
			}
			else
				a = 0;
		}
		++i;
	}
}

/*
4
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions: 
--------------------------------------------------------------------------------

다음 함수를 작성하십시오.

void sort_int_tab(int *tab, unsigned int size);

정확히 'size'를 포함하는 'tab'int 배열을 (제자리에) 정렬해야합니다.
오름차순으로 회원.

복식은 보존해야합니다.

입력은 항상 일관성이 있습니다.


*/
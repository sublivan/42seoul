#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;
	int j;

    i = 0;
    j = size;

    while(i < j)
    {
        temp = *(tab + i);
        *(tab + i) = *(tab + j - 1);
        *(tab + j - 1) = temp;
        i++;
        j--;
    }
}
int		main(void)
{
	int tab[] = {0,1,2,3,4};
	int size;

	size =5;
	
	ft_rev_int_tab(tab,size);

	for(int i =0; i < size;i++)
	{
		printf("%d",tab[i]);
	}
}

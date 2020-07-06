

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j = i+1;
    int temp;

    while(i < size-1)
    {
        if(tab[j] < tab[j-1])
        {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
        }
        i++;
        j++;
    }
}

int     main(void)
{
    int tab[5] ={5,2,3,1,4};
    int size;

    size = 5;

    ft_sort_int_tab(tab, size);

    for(int i=0; i<size; i++)
    {
        printf("%d", tab[i]);
    }
}

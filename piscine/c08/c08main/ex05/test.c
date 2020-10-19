#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>
#include <stdio.h>
    
void	ft_show_tab(struct s_stock_str *par);

int		get_length(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

char		*ft_strcpy(char *str, int size)
{
	int i;
	char *temp;

	i = 0;
	temp = (char *)malloc(sizeof(char) * size + 1);
	if (temp == 0)
	{
		return (0);
	}
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

t_stock_str	*set_stock_str(t_stock_str *tstock, char *str)
{
	tstock->str = str;
	tstock->size = get_length(str);
	tstock->copy = ft_strcpy(str, tstock ->size);
	if (tstock->copy == 0)
		return (0);
	return (tstock);

}

void	free_stock(t_stock_str *tstcok, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		free(tstcok[i].copy);
		i++;
	}
	free(tstcok);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock;
	t_stock_str *temp;
	int i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == 0)
		return (0);
	stock[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		temp = set_stock_str(stock + i, av[i]);
		if (temp == 0)
		{
			free_stock(stock, i);
			return (0);
		}
		i++;
	}
	return (stock);
}

int                    main(void)
{
    int                    index;
    int                    ac;
    char                **av;
    struct s_stock_str    *structs;
    
    ac = 10;
    av = (char **)malloc((ac + 1) * sizeof(char *));
    index = 0;
    while (index < ac)
    {
        av[index] = (char *)malloc((2 + 1) * sizeof(char));
        av[index][0] = 'x';
        av[index][1] = (char)(index + 'a');
        av[index][2] = '\0';
        index++;
    }
    structs = ft_strs_to_tab(ac, av);
    index = 0;
    while (index < ac)
    {
        printf("%d\n", index);
        printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
        printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
        printf("\t|     size : %d\n", structs[index].size);
        index++;
    }
    printf("---- SHOW TAB\n");
    ft_show_tab(structs);
}

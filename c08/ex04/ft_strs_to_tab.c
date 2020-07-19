#include <stdlib.h>
#include "ft_stock_str.h"

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

#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par)
{
	int index;

	index = 0;
	while (index)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", par[index].str, par[index].str);
		printf("\t|   copied : $%s$ @ %p\n", par[index].copy, par[index].copy);
		printf("\t|     size : %d\n", par[index].size);
		index++;
	}
}
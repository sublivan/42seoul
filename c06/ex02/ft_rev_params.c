#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		main(int ac, char **av)
{
	int index;

	if (ac > 1)
	{
		index = ac - 1;
		while (index > 0)
		{
			ft_putstr(av[index]);
			write(1, "\n", 1);
			index--;
		}
	}
}
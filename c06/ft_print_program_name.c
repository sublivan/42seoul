#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		wirte(1, str++, 1);
}

int		main(int ac, char **av)
{
	if(ac > 0)
	{	
		ft_putstr(av[0]);
	}
	write(1, "\n", 1);
}

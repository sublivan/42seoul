#include <unistd.h>

void	aff_z(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] == 'z')
		{
			write(1, "z", 1);
			return ;
		}
		str++;
	}
	write(1, "z", 1);
}

int 	main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		aff_z(av[1]);
	}
	write(1, "\n", 1);
}

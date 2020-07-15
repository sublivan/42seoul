#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort(char **str)
{
	int i;
	int j;

	i = 1;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j - 1] > str[j])
			{
				swap(str[j], str[j - 1]);
			}
			j++;
		}
		i = 1;
	}
	j = i;
	i = 1;
	while(i < j)
	{
		ft_putstr(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 2)
	{	
		sort(av);
	}
	write(1, "\n", 1);
	// sort(arr);	
}
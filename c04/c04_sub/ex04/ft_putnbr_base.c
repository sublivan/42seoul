
#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c ,1);
}

int		vaild(char *base)
{
	int i;
	int j;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	putnbr_base_recursive(int n, char *base, int len)
{
	if(n == -2147483648)
	{
		putnbr_base_recursive(n / len, base, len);
		ft_putchar(&(base[-(n % len)]));
		return ;
	}
	if(n < 0)
	{
		ft_putchar('-');
		putnbr_base_recursive(-n, base, len);
		return ;
	}
	if(n > len -1)
	{
		putnbr_base_recursive(n / len, base, len);
	}
	ft_putchar(&(base[n % len]));
}

int 	get_length(char *base)
{
	int i;
	
	i = 0;
	while(base[i] != '\0')
	{
		i++;
	}
	return i;
}

int		ft_putnbr_base(int nbr, char *base)
{
	int length;
	if (vaild(base))
		return ;
	length = get_length(base);
	putnbr_base_recursive(nbr, base, length);
}

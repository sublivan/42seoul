int		vaild(char *base)
{
	int i;
	int j;
	
	if (base[0] == '\0' || get_length(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\t' || base[i] == '\f'
			|| base[i] == '\r')
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

int 	get_length(char *base)
{
	int i;
	
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		is_space(char *str)
{
	return (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f'|| *str == '\r' ||*str == ' ');

}

int		atoi_get_int(char c, char *base)
{
	int index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int length;
	int sign;
	int result;
	int change;

	if (!vaild(base))
		return (0);
	sign = 1;
	result = 0;
	length = get_length(base);
	while (is_space(str) != 0)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if(*str== '-')
			sign *= -1;
		str++;
	}
	while ((change = atoi_get_int(*str, base)) != -1)
	{
		result *= length;
		result += change;
		++str;
	}
	return (result * sign);
}


#include <stdio.h>

int	main(void)
{
	
	printf("%d ", ft_atoi_base("42", "0123456789"));
	printf("%d ", ft_atoi_base("   42abc", "0123456789"));
	printf("%d ", ft_atoi_base("  +--++-rcrdmddd+-abc", "mrdoc"));
	printf("%d ", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("%d ", ft_atoi_base("8888888888888888888888888888888", "a8"));
	printf("%d ", ft_atoi_base("one", "e"));
	printf("%d ", ft_atoi_base("blank", ""));
	printf("%d ", ft_atoi_base("", "za"));
	printf("%d ", ft_atoi_base("ca", "zaca"));
	printf("%d ", ft_atoi_base("ca", "z\v\f\nac"));
	printf("\n");
}

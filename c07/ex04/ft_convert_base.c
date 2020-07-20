#include <stdlib.h>
int			vaild(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || 
		base[i] == '\n' || base[i] == '\t' ||
		base[i] == '\f' || base[i] == '\v' ||
		base[i] == '\r' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		get_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		is_whitespace(char *str)
{
	return (*str == '\t' || *str == '\n' || *str == ' ');
}

char	*char_to_int(char *nbr, char *base_from)
{

}

char	*int_to_base(int nb, char *base_to)
{

}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!vaild(base_from) || !vaild(base_to))
		return (0);
	
}

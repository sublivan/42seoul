#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		++str;	
	}	
}

int		main(void)
{
	char s1[] = "12345";
	ft_putstr(s1);
}

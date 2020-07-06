#include <unistd.h>

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	
	while(*(str + index) != '\0')
	{
		index++;
	}	
	write(1, str, index);
}

int main(void)
{
	ft_putstr("abcd");
}

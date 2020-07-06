#include <unistd.h>
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int index;

	index=97;
	while(index < 123)
	{
		write(1, &index, 1);
		index++;
		write(1, "\n", 1);
	}	
}

int main(void)
{
	ft_print_alphabet();
}

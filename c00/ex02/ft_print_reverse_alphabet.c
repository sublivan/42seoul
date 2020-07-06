#include <unistd.h>
void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int alphabet;

	alphabet = 122;
	while(alphabet > 96)
	{
		write(1, &alphabet,1);
		alphabet--;
		write(1, "\n", 1);
	}
}


int	main(void)
{
	ft_print_reverse_alphabet();
}

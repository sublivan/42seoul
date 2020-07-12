int 	prime_check(int nb)
{
	int check;
	
	check = nb - 1;
	while (check > 1)
	{
		if (nb % check == 0)
			return 0;
		check--;	
	}
	return 1;
}
int		ft_find_next_prime(int nb)
{	
	while(1)
	{
		if (nb == 1)
			return 2;
		if (prime_check(nb))
			return nb;
		else
			nb += 1;
	}
}

#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_find_next_prime(1));
	printf("%d \n", ft_find_next_prime(3));
	printf("%d \n", ft_find_next_prime(14));
	printf("%d \n", ft_find_next_prime(18));
	
}

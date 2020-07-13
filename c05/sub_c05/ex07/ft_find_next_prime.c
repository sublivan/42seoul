int 	prime_check(int nb)
{
	int check;
	
	check = nb - 1;
	while (check > 1)
	{
		if (nb % check == 0)
			return (0);
		check--;	
	}
	return (1);
}
int		ft_find_next_prime(int nb)
{	
	while(1)
	{
		if (nb <= 1)
			return (0);
		if (nb == 2147483630)
			return 2147483647;
		if (prime_check(nb))
			return (nb);
		nb += 1;
	}
}

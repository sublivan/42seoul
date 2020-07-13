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
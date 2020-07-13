int		ft_is_prime(int nb)
{
	if(nb == 1)
		return 0;
	int check;
	
	check = nb - 1;
	while(check > 1)
	{
		if(nb % check == 0)
			return 0;
		check--;	
	}
	return 1;
}

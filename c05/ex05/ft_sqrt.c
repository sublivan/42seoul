int		ft_sqrt(int nb)
{
	int x;

	x = 1;
	if(nb < 0)
		return 0;
	while(nb > x)
	{
		if(x * x == nb)
			return x;
		x++;
	}
	return 0;
}

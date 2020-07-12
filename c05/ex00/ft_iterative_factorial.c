int		ft_iterative_factorial(int nb)
{
	if(nb == 0 || nb < 0)
		return 0;
				
	int result =1;
	while(nb > 1)
	{
		result *= nb;
		nb--;
	}
		
}


int		ft_iterative_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0)
		return (0);
	int result = 1;
	int cnt = 1;
	while (cnt <= power)
	{
		result *= nb;
		cnt++;
	}
	return (result);
}

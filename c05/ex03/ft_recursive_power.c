int		ft_recursive_power(int nb, int power)
{
	if(nb < 0)
		return 0;
	if(nb == 0)
		return 1;
	
	if(power == 1)
		return nb;
	power--;
	
	return nb * ft_recursive_power(nb, power);
	
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(5, 5));
}

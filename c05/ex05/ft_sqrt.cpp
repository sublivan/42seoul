int		ft_sqrt(int nb)
{
	
	int x;
	
	x = 1;
	while(-0.01 > (x * x - nb) || 0.01 < (x * x - nb))
	{
		x = 0.5 * (x + nb / x);
	}
	
	return x;
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(100));
}

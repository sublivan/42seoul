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

//소수는 1과 자기자신만을 갖는 수 
//1제외,  2, 3, 5, 7, 11, 13 .... 
#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(3));
	printf("%d \n", ft_is_prime(15));
	printf("%d \n", ft_is_prime(13));
	
}

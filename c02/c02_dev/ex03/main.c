#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	int result;

	result = ft_str_is_numeric("12345");
	printf("%d \n", result);
	result = ft_str_is_numeric("abc1234");
	printf("%d \n",result);
	result = ft_str_is_numeric("1234ABC");
	printf("%d \n",result);
	result = ft_str_is_numeric("?1?!!");
	printf("%d \n",result);


}

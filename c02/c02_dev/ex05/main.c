#include <stdio.h>
  
int     ft_str_is_uppercase(char *str);

int     main(void)
{
	int result;

	result = ft_str_is_uppercase("ABCDE");
	printf("%d", result);
	result = ft_str_is_uppercase("abc1234");
	printf("%d",result);
	result = ft_str_is_uppercase("1234ABC");
	printf("%d",result);
	result = ft_str_is_uppercase("?1?!!");
	printf("%d",result);
	result = ft_str_is_uppercase("");
	printf("%d",result);
}

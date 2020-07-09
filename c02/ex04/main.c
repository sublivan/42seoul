#include <stdio.h>
  
int     ft_str_is_lowercase(char *str);

int     main(void)
{
	int result;
	
	result = ft_str_is_lowercase("abcde");
	printf("%d", result);
	result = ft_str_is_lowercase("abc1234");
	printf("%d",result);
	result = ft_str_is_lowercase("1234ABC");
	printf("%d",result);
	result = ft_str_is_lowercase("?1?!!");
	printf("%d",result);


}

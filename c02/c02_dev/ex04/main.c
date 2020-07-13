#include <stdio.h>
  
int     ft_str_is_lowercase(char *str);

int     main(void)
{
	int result;
	
	result = ft_str_is_lowercase("abcde");
	printf("%d \n", result);
	result = ft_str_is_lowercase("abc1234");
	printf("%d \n",result);
	result = ft_str_is_lowercase("1234ABCabc");
	printf("%d \n",result);
	result = ft_str_is_lowercase("?1?!!");
	printf("%d \n",result);


}

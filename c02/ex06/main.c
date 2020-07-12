#include <stdio.h>
  
int     ft_str_is_printable(char *str);

int     main(void)
{
	int result;

	result = ft_str_is_printable("ABCDE");
	printf("%d", result);
	result = ft_str_is_printable("abc1234");
	printf("%d",result);
	result = ft_str_is_printable("1234ABC");
	printf("%d",result);
	result = ft_str_is_printable("?1?!!");
	printf("%d",result);
	result = ft_str_is_printable("");
	printf("%d",result);
}

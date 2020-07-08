#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	int result;
	
	result = ft_str_is_alpha("ab1234121");	
	printf("%d", result);
	result = ft_str_is_alpha("123432");
	printf("%d", result);
	result = ft_str_is_alpha("");
	printf("%d", result);
}

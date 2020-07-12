#include <stdio.h>
  
int     ft_str_is_printable(char *str);

int     main(void)
{
	int result;

	result = ft_str_is_printable("ABCDE");
	printf("%d \n", result);
	result = ft_str_is_printable("		");
	printf("%d \n",result);
	result = ft_str_is_printable("123	4ABC");
	printf("%d \n",result);
	result = ft_str_is_printable("?1? !!");
	printf("%d \n",result);
	result = ft_str_is_printable("");
	printf("%d \n",result);
}

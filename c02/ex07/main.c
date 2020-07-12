#include <stdio.h>

char		*ft_strupcase(char *str);

int		main(void)
{
	char arr[]= {"abCDef1234"};

	ft_strupcase(arr);

	printf("%s", arr);
}

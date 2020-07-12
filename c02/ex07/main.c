#include <stdio.h>

char		*ft_strupcase(char *str);

int		main(void)
{
	char arr[7]= {"abCDef"};

	ft_strupcase(arr);

	printf("%s", arr);
}

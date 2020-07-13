#include <stdio.h>
  
char	*ft_strlowcase(char *str);

int     main(void)
{
	    char arr[]= {"124AbCDef123"};

		ft_strlowcase(arr);

		printf("%s", arr);
}

#include <stdio.h>
  
char	*ft_strlowcase(char *str);

int     main(void)
{
	    char arr[7]= {"abCDef"};

		ft_strlowcase(arr);

		printf("%s", arr);
}

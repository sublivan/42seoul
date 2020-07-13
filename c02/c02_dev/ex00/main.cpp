#include <stdio.h>
int		main(void)
{
	char src1[20];

	ft_strcpy(src1, "i love you");
	printf("%s \n", src1);
	
	char c[20];
	printf("%s \n", ft_strcpy(c, "12345678912345678900"));
	printf("%s \n", ft_strcpy(c, "ujuj"));
	printf("%s \n", ft_strcpy(c, "1234"));
}

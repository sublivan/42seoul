#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char src[] ={"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	ft_strcapitalize(src);
	printf("%s", src);
}

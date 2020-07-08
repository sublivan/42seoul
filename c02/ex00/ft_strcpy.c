#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return dest;
}

int		main(void)
{
	char src1[20];

	ft_strcpy(src1, "i love you");
	printf("%s", src1);
}


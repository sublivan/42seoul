  
  
unsigned int  ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[j] != '\0')
	{
		j++;
	}
	if(size < i )
		return (j + size);
	else
		return (i + j);

}

#include <stdio.h>
#include <string.h>

int   main(void)
{

	char s1[] = {"hello"};

	char s2[] = {"good"};

	int temp;

	temp = ft_strlcat(s1, s2, 4);
	printf("%d", temp);

	//int test;
	//test = strlcat(s1, s2, 7);
	//printf("%d", test);

}

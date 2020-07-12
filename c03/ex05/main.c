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

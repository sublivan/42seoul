#include <stdio.h>

int main(void)
{
	char **split;
	char *str = "abcdecfgchicjk";
	split = ft_split(str, 'b');
	//char *str = "ab cd ef gh ij";
	//split = ft_split(str, ' ');
	//char *str = "";
	//split = ft_split(str, 'b');
	int index  = 0;
	while (split[index])
	{
		printf("tab[%d] %s \n",index, split[index]);
		index++;
	}
	printf("\n");
}

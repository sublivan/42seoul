#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_here(char *temp, char c)
{
	int i = 0;
	while (temp[i])
	{
		if (temp[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	*union_do(char *temp, char *src)
{
	int size = ft_strlen(temp);

	int i = 0;
	int cnt = size;
	while (src[i])
	{
		if (is_here(temp, src[i]) == 0)
			temp[cnt++] = src[i];
		i++;
	}
	temp = 0;
	return (temp);

}

void	ft_union(char *str1, char *str2)
{
	int index;
	char temp[256] = {0};
	union_do(temp, str1);
	union_do(temp, str2);
	index = 0;
	while (temp[index])
	{
		write(1, &temp[index++], 1);
	}
}


int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
}

/*
두 개의 문자열을 가져와 두 배로 표시하지 않는 프로그램을 작성하십시오.
문자열 중 하나에 나타나는 문자.

명령 행에 문자가 나타나는 순서대로 표시되며
뒤에 \ n이 붙습니다.

인수 수가 2가 아닌 경우 프로그램은 \ n을 표시합니다.

예:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/
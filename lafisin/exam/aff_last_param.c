#include <unistd.h>

void	ft_pustr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		str++;
	}

}

int 	main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			ft_pustr(av[i]);
			i++;
		}
	}
	write(1, "\n", 1);
}

/*
Allowed functions: write

문자열을 인수로 사용하고 마지막을 표시하는 프로그램을 작성하십시오.
인수 다음에 개행 문자가옵니다.

인수 수가 1보다 작은 경우 프로그램은 개행을 표시합니다.

예 :

$> ./aff_last_param "Zelda" "is" "a" "boy"| 고양이 -e
소년 $
$> ./aff_last_param "인터넷에서 읽었습니다!" | 고양이 -e
나는 인터넷에서 이것을 읽었다! $
$> ./aff_last_param | 고양이 -e
$

*/
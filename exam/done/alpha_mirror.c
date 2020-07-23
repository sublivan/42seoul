#include <unistd.h>

int is_alpha(char c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	alpha_mirror(char *str)
{
	int i;
	i = 0;
	char *temp;
	char c;
	while(str[i])
	{
		c = str[i];
		if(is_alpha(c) == 1)
		{
			c = (c >= 'A' && c <= 'Z') ? ('A' + 'Z' - c) : ('a' + 'z' - c);
		}
		i++;
		write(1, &c, 1);
	}
}

int	main(int ac, char **av)
{
	if(ac > 1)
	{
		alpha_mirror(av[1]);
	}
	write(1, "\n", 1);
}

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

문자열을 받아서이 문자열을 표시하는 alpha_mirror라는 프로그램을 작성하십시오.
각 알파벳 문자를 반대 알파벳 순서로 바꾼 후
문자 다음에 줄 바꿈

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

케이스는 변경되지 않습니다.

인수 수가 1이 아닌 경우 개행 만 표시하십시오.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/
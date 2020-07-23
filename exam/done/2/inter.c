#include <unistd.h>
void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
int		is_here(char *temp, char c)
{
	int i =0;
	while(temp[i])
	{
		if(temp[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	char temp[256];
	int i = 0;
	int j = 0;
	int cnt = 0;
	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				if(is_here(temp, s1[i]) == 0)
				{
					temp[cnt++] = s1[i];
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	
	temp[i] = '\0';
	ft_putstr(temp);

}

int main(int ac, char **av)
{
	if(ac > 2)
	{
		ft_inter(av[1], av[2]);
	}
	else
	{
		write(1, "\n", 1);
	}
	
}

/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

두 개의 문자열을 가져와 두 배로 표시하지 않는 프로그램을 작성하십시오.
두 문자열 모두에 처음 나오는 순서대로 나타나는 문자
하나.

디스플레이 뒤에 \ n이 표시됩니다.

인수 수가 2가 아닌 경우 프로그램은 \ n을 표시합니다.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/
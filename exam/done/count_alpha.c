#include <unistd.h>
#include <stdio.h>

char		*is_lowercase(char *str)
{
	char c;
	int i = 0;
	while (str[i])
	{
		c = str[i];
		if(c >= 'A' && c <= 'Z')
			str[i] = c + 32;
		i++;
	}
	return (str);
}

int		is_here(char *visit, char c)
{
	int i = 0;
	while(visit[i])
	{
		if(visit[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	count_alpha(char *str)
{
	int i = 0;
	int cnt = 0;
	int j = 0;
	int hm = 0;

	char c;
	char visit[26];

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <='z')
		{
			c = str[i];
			if(is_here(visit, c) == 1)
			{
				i++;
				continue;
			}
			if (hm++ > 0)
				printf(", ");
			visit[i] = str[i];
			j = i + 1;
			cnt = 1;
			while(str[j])
			{
				if(c == str[j])
					cnt++;
				j++;
			}
			printf("%d%c", cnt, c);
			//printf(", ");
		}
		i++;
	}
	printf("\n");
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		is_lowercase(av[1]);
		count_alpha(av[1]);
	}
	else
		write(1, "\n", 1);
}

/*
Assignment name  : count_alpha
Expected files   : count_alpha.c
Allowed functions: write, printf
--------------------------------------------------------------------------------

문자열을 가져와 숫자를 표시하는 count_alpha라는 프로그램을 작성하십시오.
알파벳 문자의 발생. 다른 문자는 포함되지 않습니다.
순서는 문자열에서 발생하는 순서입니다. 디스플레이는
개행.

형식은 예제에 있습니다.

인수 수가 1이 아닌 경우 개행 만 표시하십시오.

Examples :
$> ./count_alpha abbcc
1a, 2b, 2c
$> ./count_alpha "abbcc"
1a, 2b, 2c
$> ./count_alpha "abbcc" "dddeef" | cat -e
$
$> ./count_alpha "My Hyze 47y 7." | cat -e
1m, 3y, 1h, 1z, 1e$
$> ./count_alpha "" | cat -e
$
*/
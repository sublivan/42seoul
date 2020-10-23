char		*is_lowercase(char *str)
{
	char c;
	int i = 0;
	while (str[i])
	{
		c = str[i];
		if(c >= 'A' && c <= 'Z')
			str[i] = c + 32;
	}
	return (str);
}

void	count_alpha(char *str)
{
	is_lowercase(str);

}

int main(int ac, char **av)
{
	if(ac > 1)
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
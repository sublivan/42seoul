#include <unistd.h>

void	print_hex(int nb)
{
	if(nb >= 16)
	{
		print_hex(nb / 16);
	}
	write(1, &"0123456789abcdef"[nb % 16], 1);
}
int		main(int ac, char **av)
{
	int num = 0;
	int i =0;
	while(av[1][i])
	{
		num *=10;
		num += av[1][i] - '0';
		i++;
	}
	if(ac > 1)
	{
		print_hex(num);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

10 진수로 표현 된 양수 (또는 0)를 취하는 프로그램을 작성하십시오.
기본 16 (소문자) 다음에 줄 바꿈으로 표시합니다.

매개 변수 수가 1이 아닌 경우 프로그램은 개행을 표시합니다.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$

*/

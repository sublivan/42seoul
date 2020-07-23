#include <unistd.h>

void	ft_write_num(int nb)
{
	if(nb > 9)
		ft_write_num(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int main(void)
{
	int i = 1;
	while(i < 100)
	{
		if(i % 3 ==0 && i % 5 ==0)
		{
			write(1, "fizzbuzz", 8);
		}
		if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			ft_write_num(i);
		write(1, "\n", 1);
		i++;
	}

}
/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

1에서 100까지의 숫자를 인쇄하는 프로그램을 작성하십시오.
개행.

숫자가 3의 배수이면 대신 'fizz'를 인쇄합니다.

숫자가 5의 배수이면 대신 '버즈'를 인쇄합니다.

숫자가 3의 배수와 5의 배수 인 경우 대신 'fizzbuzz'가 인쇄됩니다.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> 
*/
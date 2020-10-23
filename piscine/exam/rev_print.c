#include <unistd.h>

void	rev_print(char *str)
{
	int size = 0;
	while(str[size])
		size++;
	
	while(size--)
	{
		write(1, &str[size], 1);
	}
}

int main(int ac, char **av)
{
	if(ac == 1)
	{
		rev_print(av[1]);
	}
	else
		write(1, "\n", 1);
}


/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

문자열을 가져 와서 문자열을 반대로 표시하는 프로그램을 작성하십시오.
줄 바꿈이 뒤 따릅니다.

매개 변수 수가 1이 아닌 경우 프로그램은 개행을 표시합니다.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
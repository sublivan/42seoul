#include <unistd.h>

void ulstr(char *str)
{
	char c;
	int i = 0;
	while(*str)
	{
		c = *str;
		if(c >= 'a' && c <= 'z')
			c -= 32;
		else if(c >= 'A' && c <= 'Z')
			c += 32;
		write(1, &c, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if(ac > 1)
	{
		ulstr(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

문자열을 취하고 모든 문자의 대소 문자를 반대로하는 프로그램을 작성하십시오.
다른 문자는 변경되지 않습니다.

결과 뒤에 '\ n'을 표시해야합니다.

인수 수가 1이 아닌 경우 프로그램은 '\ n'을 표시합니다.

Examples :

$>./ulstr "PeTEr PIpeR pICKeD A PeCK of pIckLEd PEPPers." | cat -e
pEteR piPEr PickEd a pEck OF PiCKleD peppERS.$
$>./ulstr "A pEcK OF picKLED pePPErS PeTEr PIpeR picked.  " | cat -e
a PeCk of PICkled PEppeRs pEteR piPEr PICKED.  $
$>./ulstr | cat -e
$
*/
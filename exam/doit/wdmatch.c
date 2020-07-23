#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while (s1[len])
		++len;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

두 개의 문자열을 사용하여 가능한지 여부를 확인하는 프로그램을 작성하십시오.
존중하면서 두 번째 문자열의 문자로 첫 번째 문자열을 작성하십시오.
이 문자들이 두 번째 문자열에 나타나는 순서.

가능한 경우 프로그램은 문자열을 표시하고 그 뒤에 \ n을 표시합니다. 그렇지 않으면
단순히 \ n을 표시합니다.

인수 수가 2가 아닌 경우 프로그램은 \ n을 표시합니다.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$


*/
#include <unistd.h>

int		is_space(char c)
{
	if(c == ' ' || c =='\t')
		return (1);
	return (0);
}

void	last_word(char *str)
{
	while(*str)
		str++;
	str--;
	while(is_space(*str) == 1)
		str--;
	while(is_space(*str) == 0 && *str)
		str--;
	str++;
	while(*str)
	{
		if(is_space(*str) == 1)
			break;
		write(1, str, 1);
		str++;
	}
}

int		main(int ac, char **av)
{
	if(ac > 1)
	{
		last_word(av[1]);
	}
	else
	{
		write(1, "\n", 1);
	}	
}


// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// 문자열을 가져 와서 마지막 단어 뒤에 \ n을 표시하는 프로그램을 작성하십시오.

// 단어는 공백 / 탭 또는 시작 / 끝으로 구분 된 문자열 섹션입니다.
// 문자열

// 매개 변수 수가 1이 아니거나 단어가없는 경우 줄 바꿈을 표시하십시오.
// munjayeol-eul gajyeo waseo majimag dan-eo dwie \ neul pyosihaneun peulogeulaem-eul 

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
